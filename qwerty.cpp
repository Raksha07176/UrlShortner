#include<iostream>
#include<string>
using namespace std;
int main()
{
string s= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string shorten;
int n,m;
cin>>n;
m=n;
while(n!=0)
{
	int rem=n%62;
	shorten+=s[rem];
	n=n/62;
}
cout<<shorten<<endl;
return 0;
}
