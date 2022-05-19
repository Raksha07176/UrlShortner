#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main()
{
   map<string, string> m;
   string a,b;
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
   	ofstream fp("file.txt" , ios::app);           //soch ra hu  okk 
   	cin>>a>>b;
   	m.insert(pair<string, string>(a,b));
   	fp<<a<<" "<<b<<endl;
   fp.close();
   }
   
   return 0;
}
