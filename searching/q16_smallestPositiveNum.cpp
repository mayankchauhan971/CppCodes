//find the smallest positive number using for loop
//use a for loop and then binary search to see if the next smallest positive number is present or not

#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		int smallest;
		bool isFound = false;
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
			if(arr[i] > 0)
				smallest = arr[i];
				isFound = true;
		}
		for (int i = 0; i < n; ++i)
		{
			if(arr[i] <= smallest && arr[i] > 0){
				//found the minimum positive
				smallest = arr[i];
				//to find minimum missing
			}
		}
		bool isSorted = true;
		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i] >= arr[i+1])
			{
				//array is sorted
				isSorted = false;
			}
		}

		if(smallest != 1 || isFound == false)
			cout << "1\n";
		else if(isSorted)
			cout << arr[n-1] + 1 << endl;
		else{
			while(smallest++){
				for (int i = 0; i < n; ++i)
				{
					if(arr[i] == smallest){
						isFound = true;
						break;
					}
					else{
						isFound = false;
					}
				}
				if(isFound == false){
					cout << smallest <<endl;;
					return 0;
				}
			}
			// isFound == false;
			// //find the largest and print the next element
			// int largest = arr[0];
			// for (int i = 0; i < n; ++i)
			// {
			// 	if(arr[i] > smallest){
			// 		//found the minimum positive
			// 		largest = arr[i];
			// 		//to find minimum missing
			// 		isFound = true;
			// 	}
			// }

		}

	}
}