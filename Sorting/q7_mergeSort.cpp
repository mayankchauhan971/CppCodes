//TO DO ---> INCOMPLETE

#include <iostream>
using namespace std;

int merge(int leftArr[], int rightArr[], int arr[]){
	int i,j,k=0;
	int ln = sizeof(leftArr)/sizeof(leftArr[0]); //for this to work we need to send them by values
	int rn = sizeof(rightArr)/sizeof(rightArr[0]);
	while(i < ln && j < rn){
		if(leftArr[i] < rightArr[j]){
			arr[k] = leftArr[i];
			i++;
			k++;
		}
		else{
			arr[k] = rightArr[j];
			j++;
			k++;
		}
	}
	while(i < ln){
		arr[k] = leftArr[i];
		i++;
		k++;
	}
	while(i < rn){
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}

int mergeSort(int arr[]){
	//divide and sort
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << n << "  pintu";
	if(n > 1){
		int mid = n/2;
		int leftArr[mid];
		int rightArr[n-mid];
		for (int i = 0; i < mid-1; ++i)
		{
			leftArr[i] = arr[i];
		}
		for (int i = mid; i < n; ++i)
		{
			rightArr[mid-i] = arr[i];
		}
		mergeSort(leftArr);
		mergeSort(rightArr);
		merge(leftArr, rightArr, arr); //this will merge the sorted pieces together	
	}
	
}

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
		mergeSort(arr);
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}