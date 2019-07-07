// ==================
// DOUBT
// ==================
//   https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages/0



#include <iostream>
using namespace std;

int sum(int startPt, int tillPt, int arr[]){
	int sum = 0;
	for(int i= startPt, i < endPt, i++){
		sum = sum + arr[i];
	}
	return sum;
}


int maxSumLeftAndRight(int arr[], int startPt, int endPt){
	int midPt = (startPt+ endPt)/2;
	int leftSum = sum(startPt, midPt, arr);
	int rightSum = sum(midPt,endPt, arr);
	if(rightSum > leftSum){
		p = midPt;
		return midPt;
	}
	else{
		p = startPt;
		return startPt;
	}
}



int main(){
	int m = 0;
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
		if(m == 0){
			cin >> m;
		}
		baseInd = maxSumLeftAndRight(arr,0,n-1);
		if(baseInd == 0)
			baseAnswer = sum()


	}
}