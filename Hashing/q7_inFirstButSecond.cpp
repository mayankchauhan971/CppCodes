#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--){
    	long int n,m,i;
    	unordered_map<long int, long int> mp;
    	cin >> n >> m;
        long int a[n];
        long int b[m];
        for (i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
    	for (i = 0; i < m; ++i){
    		cin >> b[i];
    		mp[b[i]] = 1;
    	}
    	for (i = 0; i < n; ++i)
    	{
    		if(mp[a[i]] != 1){
    			cout << a[i] << " ";
    		}
    	}
        cout <<endl;
    } 
	return 0;
}