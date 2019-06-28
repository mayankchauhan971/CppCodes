// https://practice.geeksforgeeks.org/problems/sort-by-absolute-difference/0
// DOUBT


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int k;
bool comp(const int &a,const int &b)
{
    return (abs(k-a)<abs(k-b));
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	   stable_sort(arr,arr+n,comp);
	   for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
	   cout<<endl;
	}
	return 0;
}