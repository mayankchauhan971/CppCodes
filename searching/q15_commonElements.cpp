#include <iostream>
using namespace std;
void inputArray(long int a, long int A[]){
	for (long int i = 0; i < a; ++i)	{
		cin >> A[i];
	}
}

long int binarySearch(long int B[], long int toFind, long int startPt, long int endPt){
	if(startPt <= endPt){
		long int mid = (startPt + endPt)/2;
		if(B[mid] == toFind)
			return mid;
		if(B[mid] > toFind)
			return binarySearch(B, toFind, startPt, mid - 1);
		else
			return binarySearch(B, toFind, mid+1, endPt);
	}
	else
		return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long int a,b,c;
		cin >> a >> b >> c;
		long int A[a], B[b], C[c];
		inputArray(a, A);
		inputArray(b, B);
		inputArray(c, C);
		bool isFound1 = false;
		bool isFound2 = false;
		for (long int i = 0; i < a; ++i)
		{
			if(A[i] != A[i+1]){
				//that is non repeating numbers
				if(binarySearch(B,A[i],0,b-1) != -1){
					isFound1 = true;
					if(binarySearch(C,A[i],0,c-1) != -1){
						//element is common in all 3
						cout << A[i] << " ";
						isFound2 = true;
					}
				// 	else{
				// 		//common in first two but not the third
				// 		//if not found then it is by default false
				// 		//do nothing
				// 	}
				}
				// else{

				// }
			}
		}
		if(!isFound1 || !isFound2)
			cout << "-1";
		cout << endl;
	}
}