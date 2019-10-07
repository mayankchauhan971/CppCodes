#include <bits/stdc++.h>
using namespace std;

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
		int sumTillHere = arr[0];
		int finalSum = arr[0];
		for (int i = 1; i <= n-1; ++i)
		{
			
			sumTillHere = max(arr[i], sumTillHere+arr[i]);
			finalSum = max(sumTillHere, finalSum);
		}
		cout << finalSum <<endl;
		
	}
	return 0;
}