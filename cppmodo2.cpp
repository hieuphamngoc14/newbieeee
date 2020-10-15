#include<iostream>
using namespace std;
long solve(long a,long m)
{	a=a%m;
	for(int i=0;i<m;i++)
	{
		if((i*a-1)%m==0)
		return i;
	}
	return -1;
}
main()
{
	int n;
	cin>>n;
	while(n--)
	{
			long a,m;
			cin>>a>>m;
			cout<<solve(a,m);
			cout<<endl;
	}
}
