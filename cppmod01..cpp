#include<iostream>
#include<cmath>
using namespace std;
long long solve(long long a,long long b,long long p)
{	
	long long result;
	result=a;
	--b;
	while(b--)
	{
		result=result*a;
		result=result%p;
	}
	return result;
}
main()
{
	int n;
	cin>>n;
	while(n--)
	{
			long long a,b,p;
	cin>>a>>b>>p;
	cout<<solve(a,b,p);
	cout<<endl;
	}
	
}
