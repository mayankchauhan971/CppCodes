#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	unsigned long int arr[n];
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
		}
		unsigned long int max = arr[0];
		unsigned long int min = arr[0];
		for(int j = 0; j < n; j++){
			if(arr[j] > max){
				max = arr[j];
			}
			else if(arr[j] < min){
				min = arr[j];
			}
		}
		cout << min << " " << max << endl;
    }
}