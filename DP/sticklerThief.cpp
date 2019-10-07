#include <bits/stdc++.h>
using namespace std;


long int findMax(long int arr[], int n){

	if(n <= 1){
		return arr[0];
	}
	long int dp[n]; // this will store max till here
	dp[0] = arr[0];
	dp[1] = max(arr[0], arr[1]); //if arr[0] is bigger then dp[1] will still store arr[0]
	long int curMax = dp[1];
	long int gMax = dp[1];

	for(int i = 2; i < n; i++){
		curMax = max(dp[i-1], dp[i-2]+arr[i]);
		gMax = max(gMax, curMax);
		dp[i] = gMax;
	}
	return dp[n-1];
}


int main()
{
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		long int arr[n];
		for (int i = 0; i < n; ++i){
			cin >> arr[i];
		}

		long int p = findMax(arr, n);
		cout << p <<endl;
	}
}