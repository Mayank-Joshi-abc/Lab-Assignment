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
	auto a = arr1.cbegin();
	auto b = arr2.cbegin();	
	while(a!=arr1.cend()||b!=arr2.cend())
	{
		if(*a == *b)
			{
				cout<<*a<<" "<<*b<<endl;
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









