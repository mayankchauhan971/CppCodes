// THIS IS THE CORRECT APPROACH BUT THIS IS O(n^2)
// AND ANSWER SHOULD BE IN O(n)

// #include <iostream>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		unsigned long int n;
// 		cin >>n;
// 		unsigned long int arr[n];

// 		// INPUT TO THE ARRAY
// 		for (unsigned long int i = 0; i < n; ++i){
// 			cin >> arr[i];
// 		}

// 		// TWO ITERATIONS
// 		// ASSUME THE FIRST ELEMENT TO BE THE LARGEST
// 		// AND COMPARE TO THE REST OF THE ELEMENTS
// 		unsigned long int largest = arr[0];
// 		for (unsigned long int i = 0; i < n - 1; ++i){
// 			bool isLargest = true;
// 			if(arr[i] < arr[n-1]){
// 				// cout << arr[n-1];
// 				continue;
// 			}
// 			largest = arr[i];
// 			for (unsigned long int j = i; j < n; ++j){
// 				if(largest < arr[j]){
// 					// FOUND A LARGEST NUMBER
// 					largest = arr[j];
// 					isLargest = false;
// 					break;
// 				}
// 			}
// 			if(isLargest == true){
// 				cout << largest << " ";
// 			}
// 		}
// 		cout << arr[n-1] << " ";
// 		cout  << endl;
// 	}
// }


// =======================================================================================
// O(n) APPROACH
// =======================================================================================

#include <iostream>
#include <stack>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long int n;
		cin >> n;
		unsigned long int arr[n];
		for (unsigned long int i = 0; i < n; ++i){
			cin >> arr[i];
		}

		// traverse the array from behind and add the elemnets into a stack in ascending order
		stack <int> s;
		s.push(arr[n-1]); //last element will always be there
		unsigned long int i = n-1;
		unsigned long int largest = arr[n-1];
		while(i--)
		{
			if(arr[i] >= largest){
				s.push(arr[i]);
				largest = arr[i];
			}
		}
		while(s.empty() == false){
			cout << s.top() << " ";
			s.pop();
		}
		cout << endl;
	}
}

