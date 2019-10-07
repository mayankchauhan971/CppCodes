#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// tabulation approach i.e. fill the array first
int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n,a,b,c;
    	cin >> n>> a>>b>>c;
    	// this arr array contains the number of solutions that's why it will be incremented by 1
    	int arr[n+1];
    	 for(int i = 1; i <=n; i++){
	        arr[i] = -1;
	    }
    	arr[0] = 0;
    	for (int i = 1; i <=n ; ++i)
    	{
    		if(i >= a && arr[i-a] != -1)
    			arr[i] = max(1+arr[i-a], arr[i]);
    		if(i >= b && arr[i-b] != -1)
    			arr[i] = max(1+arr[i-b], arr[i]);
    		if(i >= c && arr[i-c] != -1)
    			arr[i] = max(1+arr[i-c], arr[i]);
    	}
    	cout << arr[n] <<endl;
    	// if that arr is present use that else 
    }
	return 0;
}