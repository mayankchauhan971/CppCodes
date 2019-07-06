#include <iostream>
#include <string>
using namespace std;

string convertToNum(string s1,string s2){
	long int num1 = 0;
	long int tenFactor = 1;
	for(long int i = s1.length() - 1; i >= 0; i--){
		long int p = int(s1.at(i)) - 48;
		num1 = num1 + p*tenFactor;
		tenFactor = tenFactor*10;
	}
	long int a = num1;

	long int num2 = 0;
	tenFactor = 1;
	for(long int i = s2.length() - 1; i >= 0; i--){
		long int p = int(s2.at(i)) - 48;
		num2 = num2 + p*tenFactor;
		tenFactor = tenFactor*10;
	}
	long int b = num2;
	string s =  to_string(a*b);
	return s;
	// return a*b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string m;
		string n;
		cin >> m >> n;
		// find what number it is
		cout << convertToNum(n,m) << endl;
	}
}