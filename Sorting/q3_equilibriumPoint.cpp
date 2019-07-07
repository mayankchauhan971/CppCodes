#include <iostream>
using namespace std;

int sum(int arr[], int startPt, int endPt){
	int sum = 0;
	for (int i = startPt; i <= endPt; ++i)
	{
		sum = sum + arr[i];
	}
	return sum;
}

int bin_search(int arr[], int left, int right, int n)
{
    if(left <= right){
        int mid = left + (right - left)/2;
        int leftSum = sum(arr,0,mid-1);
		int rightSum = sum(arr,mid+1, n-1);
        if(leftSum == rightSum){
            return mid; //that is the index
        }
        if(leftSum > rightSum){
            return bin_search(arr,left, mid-1, n);
        }
        else{
            return bin_search(arr, mid+1, right, n);
        }
    }
    else
        return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		if(n == 1){
			cout << 1 <<endl;
		}
		else{
			int found = bin_search(arr,0,n-1,n);
			if(found == -1) cout << -1 <<endl;
			else
        		cout<<found + 1<<endl;
		}
	}
}