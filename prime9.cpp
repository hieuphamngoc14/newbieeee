#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int i=2;
		while(a!=1)
		{
			int somu=0;
			while(a%i==0)
			{
				somu++;
				a/=i;
			}
			if(somu>0)
			cout<<i<<" "<<somu<<" ";
			i++;
		}
		cout<<endl;
	}
}
