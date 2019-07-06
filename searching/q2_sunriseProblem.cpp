#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unsigned long int arr[n];
		for(unsigned long int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int min = arr[0];
		int count = 1;
		for(unsigned long int i = 0; i < n; i++){
			if(arr[i] > min){
				count++;
				min = arr[i];
			}
		}
		cout << count <<endl;;
	}
}