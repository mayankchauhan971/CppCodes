#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace  std;

int binarySearch(int startInd, int endInd, long int toFind, long int arr[]){
	if(startInd <= endInd){
		int mid = (startInd + endInd)/2;
		if(arr[mid] == toFind){
			return mid;
		}
		if(arr[mid] > toFind){
			return binarySearch(startInd, mid - 1, toFind, arr);
		}
		else 
			return binarySearch(mid+1, endInd, toFind, arr);
	}
	else
		return -1;
}


int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		long int k;
		cin >>n;
		long int arr[n];
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
		}
		cin >> k;
		int rotateIndex;
		//as the array is rotated it will be sorted in two parts
		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i+1] < arr[i]){
				rotateIndex = i;
				break;
			//that is i indices is rotated
			//0 to i is one sorted array
			// i+1 to n-1 is another sorted array
			}
		}
		int p = binarySearch(0,rotateIndex,k,arr);
		int q = binarySearch(rotateIndex+1,n-1,k,arr);
		if(p == -1 && q == -1){
			cout << "-1\n";
		}
		else if(p == -1){
			cout << q << endl;
		}
		else{
			cout << p <<endl;
		}
	}
}