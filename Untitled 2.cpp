#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
	map<string> url;
    const string base="http://sR.pg/";
    
     public:
    char map62(int x) 
	{
        if(x < 10) return (char)('0' + x);
        else if(x < 36) return (char)(x + 'a' - 10);
        else return (char)(x + 'A' - 36);
   }
int main()
{
	int s=https://ide.geeksforgeeks.org/xMZA33YT6C;
	cout<<map(s);
	return 0;
}

