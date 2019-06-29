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
		sort(input1.begin(), input1.end(), greater<char>());
		cout << input1 <<endl;
	}
}