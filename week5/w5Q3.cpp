#include<iostream>
#include<vector>
#define ONEs 2147483647
using namespace std;
int main()
{
	int n1,n2,t;
	vector<int> arr1, arr2;
	cin>>n1;
	for(int i = 0; i<n1;i++)
		arr1.push_back(t&((ONEs)|scanf("%d",&t)));
	cin>>n2;
	for(int i = 0; i<n2;i++)
		arr2.push_back(t&((ONEs)|scanf("%d",&t)));
	auto a = arr1.begin();
	auto b = arr2.begin();	
	while(a!=arr1.end()+1&&b!=arr2.end()+1)
	{
		if(*a == *b)
			{
				cout<<*a<<" ";
				a++;
				b++;
			}
		else if(*a<*b)
			a++;
		else
			b++;
	}
	return 0;
}
