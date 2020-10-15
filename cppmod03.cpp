#include<iostream>
using namespace std;
#define ll long long
long long solve(ll n, ll k)
{
	
	long long int a=n/k;
	long long x=n-a*k;
	return (a*k*(k-1)/2)+x*(x+1)/2; 
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
			cin>>n>>k;
	cout<<solve(n,k);
	cout<<endl;
	}

	
}
