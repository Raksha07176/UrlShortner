#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	vector<int> v;
	for(int i=0; i<5; i++)
	{
		int b=rand() % 68;
		v.push_back(b);
		cout<<v[i]<<endl;
	}
}
