// PLEASE DEBUG IT IF POSSIBLE
//MINE IS 229 183 WHILE CORRECT IS 229 183


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int arr1[n], arr2[m];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr1[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> arr2[i];
		}
		sort(arr1, arr1+n);
		sort(arr2, arr2+m);
		int k;
		cin >> k;
		int p = 0;
		int q= 0;
		int minTilNow1 = 0;
		int minTilNow2 = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{

				if(arr1[i] + arr2[j] < k && arr1[i] + arr2[j+1] > k){
					if( (k - arr1[i] - arr2[j]) > (arr1[i] + arr2[j+1] - k) ){
						p = i;
						q = j+1;
					}
					else{
						p = i;
						q = j;
					}
				}
			}
			//this is for every iteration of the first loop
			//end of inner for loop
			if(abs(arr1[p]+arr2[q]-k) < abs(arr1[minTilNow1]+ arr2[minTilNow2] - k)){ //p and q are more closer so update
				minTilNow1 = p;
				minTilNow2 = q;
			}
				else if(abs(arr1[p]+arr2[q]-k) == abs(arr1[minTilNow1]+ arr2[minTilNow2] - k)){ //wqually closer so pick the lower index in arr1
					//equal it to the lower index one
					//minTilNow1 and p corresspond to arr1

					if(arr1[p] <= arr1[minTilNow1]){
						minTilNow1 = p;
						minTilNow2 = q;
					}
				}
			}
			if(abs(arr1[n-1] + arr2[m-1] - k) < abs(arr1[minTilNow1] + arr2[minTilNow2] - k)){
				minTilNow1 = n-1;
				minTilNow2 = m-1;
			}
			cout << arr1[minTilNow1] << " " << arr2[minTilNow2] << endl;
		}
	}