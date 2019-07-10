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

		for (int i = 0; i < n-1; ++i){
			int smallestInd = i;
			for (int j = i+1; j < n; ++j){
				if(arr[j] < arr[smallestInd]){
					smallestInd = j;
				}
			}
			int temp = arr[smallestInd];
			arr[smallestInd] = arr[i];
			arr[i] = temp;
		}
		for (int i = 0; i < n; ++i){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}