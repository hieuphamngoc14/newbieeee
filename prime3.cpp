#include<iostream>
#include<vector>
using namespace std;

int check(long long n)
{
	if(n<2)
	return 0;
	else
	{	
		int dem=0;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			dem++;
		}
		if(dem==1)
		return 1;
		else
		return 0;
	}
}
int main()
{
	vector<long long> arr;
	for(int i=2;i<=10000;i++)
	{
		if(check(i)==1)
		arr.push_back(i);
	}
	int n;
	cin>>n;
	while(n--)
	{
		long long a;
		int j=0;
		cin>>a;
		while(arr[j]<=a && j<arr.size())
		{
			cout<<arr.at(j++)<<" ";
		}
		cout<<endl;
	}

}
