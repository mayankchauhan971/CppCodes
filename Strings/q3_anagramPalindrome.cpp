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
		int n = input1.length();
		int num = 0;
		sort(input1.begin(), input1.end());
		for (int i = 0; i < n; i = i + 2)
		{
			if(input1.at(i) != input1.at(i+1)){
				i = i-1;
				num++;
				if(num == 2){
					cout << "No" <<endl;
					break;
				}
			}
		}
		if(num == 1 || num == 0){
			cout << "Yes" << endl;
		}
	}
}