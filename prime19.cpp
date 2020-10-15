#include<iostream>
using namespace std;
bool check(long long n)
{
	if(n<2)
	return false;
	else if(n==2)
	return true;
	else {
		long long i=2;
		while(i<n)
		{
			if(n%i==0)
			return false;
			i++;
		}
		return true;
	}
}
main()
{
	long long a,b;
	cin>>a>>b;
	if(a<=b)
	{
		for(int i=a;i<=b;i++)
		{
			if(check(i)==true)
			cout<<i<<" ";
		}
	}
	else
	{
			for(int i=b;i<=a;i++)
		{
			if(check(i)==true)
			cout<<i<<" ";
		}
	}
	
}
