#include<bits/stdc++.h>
using namespace std;
int main()
{
	const char *fileName="file.txt";
	ifstream fp;
    fp.open(fileName);
    string a,b;
	map<string, string> m;
	while ( fp >> a >> b ) 
	{
    m[a] = b;
}

for(auto it = m.begin(); it != m.end(); ++it)
{
    cout << it->first << " " << it->second<< "\n";
}
fp.close();
return 0;
}
//file ? jha project hai whi pr hai open tht location
