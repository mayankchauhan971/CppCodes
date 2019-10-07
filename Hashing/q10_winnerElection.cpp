#include<iostream>
#include<string>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--){
    	int n,i;
    	map< string, int, greater<string>> mp;
    	cin >> n;
        string a[n];
    	for (i = 0; i < n; ++i){
    		cin >> a[i];
    		mp[a[i]]++;
    	}
        int max = -1;
        string s = "";    
    	for (auto it = mp.begin() ;it!=mp.end();it++)
    	{
    		if(it->second >=max){
    		    if(it->second==max){
                    if(it->first < result)
                     result = it->first ;
                }
                else{
                    max = it->second ;
                    result = it->first ;
                }
            }
    	}
        cout << s << " ";
        cout << max << endl;
    } 
	return 0;
}