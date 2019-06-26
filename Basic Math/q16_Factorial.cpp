// ===================
// DOUBLE GIVES ANSWER IN THE FORM OF E WHILE UNSIGNED LONG DOES NOT
// ===================

#include <iostream>
using namespace std;

void findFactorial(int n){
	unsigned long int product = n;
	for(int i = n-1; i >0; i--){
		product = product*i;
	}
	cout << product << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 0) cout << 1 << endl;
		else{
			// find factorial of this number
			findFactorial(n);
		}
	}
}