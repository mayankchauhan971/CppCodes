#include<iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    long long int arr[100000];
    arr[0] = 1;
    arr[1] = 2;
    for(int i = 2; i <= 100000; i++){
        arr[i] = (arr[i-1]%1000000007 + arr[i-2]%1000000007)%1000000007;
    }
    while(t--){
    	int n;
    	cin >> n;
    	cout << arr[n-1] <<endl;
    }
	return 0;
}