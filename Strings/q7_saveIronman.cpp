#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		string newStr = "";
		getline(cin, str);
		int n = str.length();
		for (int i = 0; i < n; ++i)
		{
			if( ((int)str.at(i) >=48 && (int)str.at(i) <=57 ) || ((int)str.at(i) >=65 && (int)str.at(i) <=90) || ((int)str.at(i) >=97 && (int)str.at(i) <=122)){
				if(((int)str.at(i) >=65 && (int)str.at(i) <=90)){
					str.at(i) = str.at(i) + 32;

				}
				newStr.push_back(str.at(i));
			}
		}
		n = newStr.length();
		bool isSaved = true;
		for (int i = 0; i < n/2; ++i)
		{
			if(newStr.at(i) != newStr.at(n-i -1)){
				isSaved = false;
				cout << "NO" <<endl;
				break;
			}
		}
		if(isSaved){
			cout << "YES" <<endl;
		}
	}
}