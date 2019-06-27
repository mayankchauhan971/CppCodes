#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    bool isPositive[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for (int i = 0; i < n; ++i){
	    	if((arr[i] - m) <= 0){
	    		isPositive[i] = false;
	    	}
	    	else{
	    		isPositive[i] = true;    		
	    	}
	    	arr[i] = abs(arr[i] - m);
	    	cout << arr[i] << " ";
	    }
	    cout << endl;
	    cout << endl;
	    stable_sort(arr,arr + n);

	    for (int i = 0; i < n; ++i){
	    	cout << arr[i] << " ";
	    }
	   	cout << endl;
	   	cout << endl;

	    for (int i = 0; i < n; ++i){
	    	if(isPositive[i] == true){
	    		// my number is positive
	    		// add this number to m
	    		arr[i] = m + arr[i];
	    		cout << arr[i] << " ";
	    	}
	    	else{
	    		arr[i] = m - arr[i];
	    		cout << arr[i] << " ";
	    	}
	    }
	    cout << endl << endl;
	    for (int i = 0; i < n; ++i){
	    	cout << arr[i] << " ";
	    }
	   	cout << endl;
	}
}