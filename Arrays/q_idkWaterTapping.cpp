#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	int lowest[n];
    	int highest[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}
    	int sum = 0;
    	// make an array to store the lowest and highest till that point array
    	lowest[0] = arr[0];
    	highest[n-1] = arr[n-1];
    	for (int i = 1; i < n; ++i)
    	{
    		lowest[i] = max(lowest[i-1],arr[i]);
    	}
    	for (int i = n-2; i >= 0; i--)
    	{
    		highest[i] = max(highest[i+1],arr[i]);
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		sum = sum + min(highest[i], lowest[i]) - arr[i];
    	}
    	cout << sum <<endl;
    }
}