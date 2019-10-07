#include<iostream>
#include <map>
#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char a[n];
		char b[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		map<char, int> m;
		map<char, int>::iterator itr;
		for (int i = 0; i < n; ++i)
		{
			m.insert({a[i], i});
		}
		for (itr = m.begin(); itr != m.end(); itr++)
		{
			cout << itr->first <<" ";
		}
		cout << endl;
		for (itr = m.begin(); itr != m.end(); itr++)
		{
			cout << itr->first <<" ";
		}
		
		cout <<endl;
	}    
	return 0;
}