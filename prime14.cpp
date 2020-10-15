#include<iostream>
#include<math.h>
using namespace std;
int isTrue(long long n)
{
	if(n<2)
	return 0;
	else if(n==2)
	return 1;
	else
	{
		long long i=2;
		while(i<n)
		{
			if(n%i==0)
			return 0;
			i++;
		}
		return 1;
	}
}
void solve(long long n)
{
	float a=sqrt(n);
	int b=sqrt(n),x;
	if(a==b)
	x=b-1;
	else
	x=a;
	for(int i=2;i<=x;i++)
	{
		if(isTrue(i)==1)
		{
			long long t=pow(i,2);
		    cout<<t<<" ";
		}
	}	
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long x;
		cin>>x;
		solve(x);
		cout<<endl;
	}
}
