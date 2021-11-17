#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int> &arr,int i,int j)
{
	int m = (i+j)/2;
	int a = i,b = m+1;
	vector<int> ar;
	while(a<=m&&b<=j)
		ar.push_back(arr[a]<=arr[b]?arr[a++]:arr[b++]);
	while(a<=m)
		ar.push_back(arr[a++]);
	while(b<=j)
		ar.push_back(arr[b++]);
	auto k = ar.begin();
	for(int p = i;p<=j;p++)
	{
		arr[p] = *k;
		k++;
	}	
}
void merge(vector<int> &arr,int i,int j)
{
	if(i<j)
	{
		int mid = (i+j)/2;
		merge(arr,i,mid);
		merge(arr,mid+1,j);
		Merge(arr,i,j);
	}
}
int main(void)
{
	int noc,t;
	cin>>noc;
	vector<vector<int> > arr(noc);
	vector<int> noe;
	vector<int> key;
	for(int i=0;i<noc;i++)
	{
		cin>>t;
		noe.push_back(t);
		for(int j=0;j<noe[i];j++)
		{
			cin>>t;
			arr[i].push_back(t);
		}
		cin>>t;
		key.push_back(t);
	}
	cout<<endl;
	for(auto &i : arr)
	{
		merge(i,0,i.size()-1);
	}
	auto k = key.begin();
	int sum, flag;
	for(auto i : arr)
	{
		flag = 0;
		auto l = i.begin();
		auto r = i.rbegin();
		while(*l<*r)
		{
			sum = *l + *r;
			if(sum == *k)
			{
				cout<<endl<<*l<<" "<<*r;
				flag = 1;
				break;
			}
			else if(sum>*k)
				r++;
			else
				l++;
		}
		k++;
		if(flag == 0)
			cout<<"No Such Element Exist";
		cout<<endl;
	}
	return 0;
}
