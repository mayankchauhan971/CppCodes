// THIS IS GIVING A SEGMENTATION FAULT FUCK KNOWS WHY

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		unsigned long int n;
// 		cin >> n;
// 		unsigned long int arr[n];
// 		unsigned long int answerArr[n];
// 		unsigned long int i = 0;
// 		 for (i = 0; i < n; ++i)
// 		 {
// 		 	cin >> arr[i];
// 		 }

// 		 if(n%2 == 0){
// 		 	for(i = 0; i <= n-2; i = i + 2){
// 			 	answerArr[i+1] = arr[i];
// 			 }
// 			for(i = 1; i <= n - 1 ; i = i + 2){
// 			 	answerArr[i-1] = arr[i];			 	
// 			 }	
// 			 answerArr[n-1] = arr[n-2];
// 			 answerArr[n-2] = arr[n-1];
			
// 		 }
// 		 else{
// 		 	for(i = 0; i < n - 2; i = i + 2){
// 			 	answerArr[i+1] = arr[i];
// 			 }
// 			for(i = 1; i < n - 1; i = i + 2){
// 			 	answerArr[i-1] = arr[i];			 	
// 			 }
// 			 answerArr[n-1] = arr[n-1];
// 			 // answerArr[n-2] = arr[n-3];
// 		 }
// 		 for (i = 0; i < n; ++i){
// 		 	cout << answerArr[i] << " ";
// 		 }
// 		 cout << endl;		 
// 	}
// }



// ===================================================================
#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    for(int i=0;i<n-1;i++)
	    {
	        swap(a[i],a[i+1]);
	        i++;
	    }
	    for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	        cout<<endl;
	}
	
	
	
	
	return 0;
}