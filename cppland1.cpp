#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;
int toInterger(string s)
{
	 int l1 = s.length();
    int num1 = 0;
    for(int i = l1 - 1; i >= 0; --i){
        num1 += (int)(s[i] - '0') * pow(10, l1-i-1);
    }
    return num1;
}
int solve(string s1, string s2)
{
	int num1,num2,num;
	num1=toInterger(s1);
	num2=toInterger(s2);
	if(num1>=num2)
	{
		num=num1-num2;
		string result;
		result=to_string(num1)
		cout<<result;
	}
	
	
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<solve(s1,s2);
}
