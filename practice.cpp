#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    string str="https://practice.geeksforgeeks.org/tracks/SPC-GA/?batchId=154";
    vector<lli> v;
    
    string temp="";
    int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(isalpha(str[i]))
        {
            j++;
            char a=str[i];
            int p=(int)a;    //converting to int 
            temp+=to_string(p);      //storing in string 
            if(j==3)                // when j is 3 then we will push it in vector and again clear temp and start
                                    //storing it again for next 3 alphabet value
                                    // 3 because   h==104,t==116,t==116   so our number will be 104116116 so if we 
                                    // increse j to 4 then overflow will take place
            {
                v.push_back( stoi(temp));
                j=0;
                temp="";
            }
        }
    }
    
    for(int i=0;i<v.size();i++)
    cout<<v[i];
}
