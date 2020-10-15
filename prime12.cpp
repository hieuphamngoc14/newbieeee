#include<iostream>
using namespace std;
int solve(int n,int k)
{
	int i=2;
	int dem=0;
	while(n!=1)
	{
		while(n%i==0)
		{
			dem++;
			n/=i;
			if(dem==k)
			{
				return i;
			}
		}
		i++;
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,k;
		cin>>a>>k;
		int x;
		x=solve(a,k);
		cout<<x;
		cout<<endl;
	}
}
