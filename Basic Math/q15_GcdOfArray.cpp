#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long int n;
		cin >> n; //length of the array
		long int arr[n];
		for(long int i =0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr,arr + n);
		int j = 0;
		while(arr[j] == 1){
			j++;
		}
		int dividingNum = arr[j];
		bool isDivisable = true;
		for(int i = j; i < n; i++){
			if(arr[i]%dividingNum == 0){ //the number is divisible
				isDivisable = true;
			}
			else{
				isDivisable = false;
				break;
			}
		}
		if(isDivisable == false){
			cout << "1" << endl;	
		}
		else{
			cout << dividingNum << endl;
		}
	}
}