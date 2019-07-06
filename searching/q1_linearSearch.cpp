#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long int n,k;
		cin >> n >> k;
		unsigned long int arr[n];
		for(unsigned long int i = 0; i < n; i++){
			cin  >> arr[i];
		}
		bool isFound = false;
		for(unsigned long int i = 0;i < n; i++){
			if(arr[i] == k){
				cout << i+1 << endl;
				isFound = true;
				break;
			}
		}
		if(!isFound){
			cout << "-1" << endl;
		}
	}
}