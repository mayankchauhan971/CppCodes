// ==========================
// NOT PASSING ALL TEST CASES
// ==========================


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t !=0){
		t--;
		int n;
		cin >> n;
		// using the sieve of eratosthenes
		// use this method as using this we have to check till highest square less than n only
		// I will first make the array of true/false
		bool arr[n+1]; //this will be of n elements only
		memset(arr, true, sizeof(arr));
		// now i will check if my prime[p] is true of false
		// if it is false means it is not a prime
		// if it is true means we have to check if its a prime

		// rest of the terms are checked on their own
		for(int p = 2; p*p < n; p++){
			if(arr[p] == true){
				for (int i=p*p; i<=n; i += p){
               		arr[i] = false;
				}
			}
		}

		for (int p=2; p<=n; p++) {
			if (arr[p]) {
	         	cout << p << " "; 
			}
		}
	}
}