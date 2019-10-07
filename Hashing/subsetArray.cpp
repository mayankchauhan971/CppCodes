#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int m,n;
    	cin >> m >> n;
    	int a[m], b[n];
    	for (int i = 0; i < m; ++i)
    	{
    		cin >> a[i];
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    	}

    	unordered_map<int,int> mp;
    	bool flag = true;

    	for (int i = 0; i < m; ++i)
    	{
    		mp.insert({a[i], i}); //insert key element
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		if(mp.find(b[i]) == mp.end()){
    			cout << "No" <<endl;
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout << "Yes" <<endl;
    	}
    }
	return 0;
}