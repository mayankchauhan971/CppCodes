#include <iostream>
using namespace std;

long int binarySearch(long int start, long int end, long int arr[], long int x, long int n){
	if(x < arr[0])
		return -1;
	else if(x >= arr[n-1])
		return n-1;
	if(start > end){
		//element not found
		start = 0;
		end = n-1;
		return binarySearch(start, end, arr, x-1,n);
	}
	long int mid = (start + end)/2; 
	if(arr[mid] == x){
		return mid;
	}
	if(arr[mid] > x)
		return binarySearch(start, mid-1, arr, x,n);
	return binarySearch(mid+1, end, arr, x,n);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long int n,x;
		cin >> n >> x; 
		long int arr[n];
		for(int i= 0; i < n; i++){
			cin >> arr[i];
		}
		long int start = 0; //starting index
		long int end = n-1;
		x = x ; //because floor would be atleast one less
		// IMPLEMENT BINARY SEARCH
		long p = binarySearch(start, end, arr, x,n);
		cout << p <<endl;
	}
}