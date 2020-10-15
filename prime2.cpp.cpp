#include<iostream>
#include<cmath>
using namespace std;
void solve(long long t)
{
	long long i=2,a;
	a=t;
	while(i<=a)
	{
		if(i>sqrt(t))
		{
			cout<<a;
			break;
		}
			while(a%i==0)
		{	
			if((a/i) == 1)
			{
				cout<<i;
				break;
			}
			a/=i;
			
		}
		i++;
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long t;
		cin>>t;
		solve(t);
	
	}
	return 0;
}
