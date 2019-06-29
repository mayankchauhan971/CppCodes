// MAXIMUM INDEX
// https://practice.geeksforgeeks.org/problems/maximum-index/0



#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long int n;
		cin >> n;
		unsigned long int arr[n];
		unsigned long int i;
		// INPUT
		for (i = 0; i < n; ++i)
			cin >> arr[i];
		unsigned long maxDiff = 0;
		// ITERATE THE LOOP FROM THE BEGGINING
		for(i = 0; i < n; i++)
		{
			for(unsigned long int j = n-1; j > i; j--)
			{
				if( arr[j] >= arr[i] && maxDiff < (j-i))
				{
					maxDiff = j-i;
				}
			}
		}
		cout << maxDiff << endl;
	}
}