#include<bits/stdc++.h>
using namespace std;
int main()
{
	char map[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string url;
	long long int n;
	cin>>n;
	while(n)
	{
		url.push_back(map[n%62]);
		n=n/62;
	}
	cout<<url;
}
