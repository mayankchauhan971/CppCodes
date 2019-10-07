#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int dp[n];  //this will store minimum jumps to reach till this point
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		if(arr[0] == 0){
			cout << "-1" <<endl;
			continue;
		}
		for (int i = 0; i < n; ++i)
		{
			dp[i] = -2;
		}
		dp[0] = 0; // jumps to reach 0 is 0

		for (int i = 0; i < n; ++i)
		 {
		 	for (int j = i+arr[i]; j > i ; j--)
		 	{
		 		if(j<n){
		 			if(dp[j] == -2){ // that is we have not reached here yet
		 				dp[j] = dp[i] + 1; // jumps till ith index plus one to reach jth index
		 			}
		 			else
		 				break;
		 		}
		 	}
		 } 
		 if(dp[n-1] == -2){
		 	cout << "-1" <<endl;
		 }
		 else
		 	cout << dp[n-1]<<endl;
	}	
}
