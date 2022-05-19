#include<iostream>
#include<unordered_map>
#include<cstdio>
#include<string>
class ShortUrl{
	unordered_map<string , string> UrlToHash;
	unordered_map<string , string> HashToUrl;
	string characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string baseUrl="https://sR.pg/";
	Random random=new Random();
	
	public string encode(string longUrl){
		if(UrlToHash.containskey(longUrl()))
		return baseUrl + UrlToHash.get(longUrl);
		
		stringBuilder hash=new stringBuilder();
		do
	}
};
