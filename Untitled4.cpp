#include<bits/stdc++.h>
#include <fstream>
using std::ofstream;
using namespace std;
#define lli long long int

map<string,string> m;

class URL{
public:
bool CheckUrl(string ShortUrl)
{
	
	if(m.find(ShortUrl)!=m.end())
	return false;
	else
	return true;
	
}

string TrimUrl(string url)
{
    string ShortUrl="";
    srand(time(0)); 
	for(int i=0; i<5; i++)
	{
		int b=rand() % url.size();                  
		ShortUrl+=url[b];           
    }                            
	return ShortUrl;
}

string CreateUrl(string str)
{
    char map[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     string url ="";
    vector<lli> v;
    string temp="";
    int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(isalpha(str[i]))
        {
            j++;
            char a=str[i];
            int p=(int)a;    
            temp+=to_string(p);      
            if(j==3)                
            {
                v.push_back( stoi(temp));
                j=0;
                temp="";
            }
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        int n=v[i];
        while(n)
    	{
    		url+=map[n%62];
    		n=n/62;
    	}
    }
    
   string t=TrimUrl(url);
   while(CheckUrl(t)==false)
   {  
       //  cout<<"same"<<endl; 
    	t=TrimUrl(url);
   }
   m[t]=str;
   return t;
   
   
}
};

int main()
{
//reading	
	const char *fileName="file.txt";
	ifstream fp;
    fp.open(fileName);
    string a,b;

	while ( fp >> a >> b ) 
	{
	
    	m[a] = b;
    }
    
    fp.close();
    
//making unique url
	
    URL u;
    string str;
    cout<<"Enter the url you want to shorten";
    cin>>str;
    string CustomUrl;
    cout<<"ENTER string you want to see in your url ";
    cin>>CustomUrl;
    
    
    string Final="";
   	Final+="http://"+CustomUrl+"/";
   	
    //open comment below for testing of uniqueness
    
    //for(int i=0;i<20;i++)
    //{
		    string TinyUrl=u.CreateUrl(str);  
			Final+=TinyUrl; 
		    cout<<Final<<endl; 
	//	    Final="";
	//	    Final+="http://"+CustomUrl+"/";
   //}
   
   //upto here
    
    
    
    
    //writing

   	ofstream outdata;
   	outdata.open("file.txt");
  for(auto it = m.begin(); it != m.end(); ++it)
  {
    a=it->first;
    b=it->second;
   	outdata<<endl<<a<<" "<<b;
  
   }
   outdata.close();  
    
    
}
