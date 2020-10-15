#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;
void toString(int a)
{
		int i=0;
	string s,result;
	while(a>0)
	{
		s[i++]= (a%10) +48;
		a/=10;		
	}
	for(int j=i-1;j>=0;j--)
	{
	cout<<s[j];
			
	}
}
int toInterger(string s)
{
	 int l1 = s.length();
    int num1 = 0;
    for(int i = l1 - 1; i >= 0; --i){
        num1 += (int)(s[i] - '0') * pow(10, l1-i-1);
    }
    return num1;
}

void solve(string s1, string s2)
{
	int num1,num2,num,i=0;
	num1=toInterger(s1);
	num2=toInterger(s2);
	num=num1+num2;
	toString(num);   
   
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	solve(s1,s2);
}
