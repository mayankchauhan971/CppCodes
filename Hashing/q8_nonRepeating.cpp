#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>> t;
    while(t--){
    	// make the hashmap
    	// increase the index as the numbers come
    	// search one by one in the hashmap

    	long int n,i;
    	unordered_map<long int, long int> m;
    	cin >> n;
    	long int a[n];
    	for (i = 0; i < n; ++i){
    		cin >> a[i];
    		m[a[i]]++;
    	}
    	bool flag = true;
    	for (i = 0; i < n; ++i)
    	{
    		if(m[a[i]] == 1){
    			cout << a[i] <<endl;
    			flag = false;
    			break;
    		}
    	}
    	if(flag) cout << "0" <<endl;
    } 
	return 0;
}