#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string  input1;
		cin >> input1;
		string  input2;
		cin >> input2;
		int n = input1.length();
		int m = input2.length();
		bool isCopy = true;
		if(n == m){
			sort(input1.begin(), input1.end());
			sort(input2.begin(), input2.end());
			for (int i = 0; i < n; ++i)
			{
				if(input1.at(i) != input2.at(i)){
					isCopy = false;
					break;
				}
			}
			if(isCopy == true){
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}
}