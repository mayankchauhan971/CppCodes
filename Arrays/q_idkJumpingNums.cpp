// //O(n2) approach

// #include<iostream>
// using namespace std;


// int findLen(int n){
// 	int count = 0;
// 	while(n != 0){
// 		n = n/10;
// 		count++;
// 	}
// 	return count;
// }

// bool isJumping(int n){
// 	int len = findLen(n);
// 	int arr[len];
// 	int temp = n;
// 	for (int i = 0; i < len; ++i)
// 	{
// 		arr[len-1-i] = temp%10;
// 		temp = temp/10;
// 	}
// 	for (int i = 0; i < len-1; ++i)
// 	{
// 		if(abs(arr[i] - arr[i+1]) != 1 ){
// 			return false;
// 		}
// 	}
// 	return true;
// }


// int main()
// {
//     int t;
//     cin >> t;
//     while(t--){
//     	int n,i;
//     	cin >> n;
//     	if(n >= 10){
//     		for (i = 0; i <= 10; ++i)
//     		{
//     			cout << i << " ";
//     		}
//     	}
//     	for(i = 11; i < n ; i++){
//     		bool flag = isJumping(i);
//     		if(flag == true){
//     			cout << i << " ";
//     		}    		
//     	}
//     	cout << endl;
//     }
// }




#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		vector<int>v;
		for(int i=1;i<=9 && i<=x;i++)
		{
			queue<int>q;
			q.push(i);
			while(!q.empty())
			{
				int num=q.front();
				q.pop();
				if(num<x)
				{
					v.push_back(num);
           // cout<<num<<" ";
					int last_digit=num%10;

					if(last_digit==0)
						q.push(num*10+last_digit+1);
					else if(last_digit==9)
						q.push(num*10+last_digit-1);
					else
					{
						q.push(num*10+last_digit-1);
						q.push(num*10+last_digit+1);
					}

				}
			}
		}
		sort(v.begin(),v.end());
		cout<<0<<" ";
		for(auto i:v)
			cout<<i<<" ";


		cout<<endl;
	}
	return 0;
}