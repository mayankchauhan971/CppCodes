#include <iostream>
using namespace std;
//we first iterate and find the smallest element
//then we go and swap the first element with the smallest element
//as swapping is involved so we will use indicies


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
		}

		for (int i = 1; i < n; ++i){
			int n = sizeof(arr)/sizeof(arr[0]);
			int smallestInd = i-1;
			for (int j = i; j < n; ++j){
				if(arr[j] < arr[smallestInd]){
					smallestInd = j;
				}
			}
			int temp = arr[smallestInd];
			arr[smallestInd] = arr[i-1];
			arr[i-1] = temp;
		}
		for (int i = 0; i < n; ++i){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

