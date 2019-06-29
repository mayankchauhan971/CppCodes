#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	unsigned long int n,m;
    	cin >> n >> m;
    	int arr[n];
    	int rotatedArr[n];
    	//INPUT LOOP
		for (unsigned long int i = 0; i < n; ++i){
			cin >> arr[i];
		}
		//FIRST PASTE THE N-M ELEMENTS FROM THE BACK TO THE FRONT OF HTE NEW ARRAY
		for (unsigned long int i = 0; i < n-m; ++i){
			rotatedArr[i] = arr[i + m];
		}

		//THEN PASTE THE FORST M ELEMENTS FROM THE BEGGINIG OF THE ARRAY TO THE BACK OF THE ARRAY
		for (unsigned long int i = n-m; i < n; ++i){
			rotatedArr[i] = arr[i - n + m];
		}
		//OUTPUT LOOP
		for (unsigned long int i = 0; i < n; ++i){
			cout << rotatedArr[i] << " ";
		}

		cout << endl;
	}
}