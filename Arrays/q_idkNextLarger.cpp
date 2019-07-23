#include<iostream>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		long int n;
		cin >> n;
		long int arr[n];
		long int i;
		stack <long int> s;
		for ( i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		// s.push(0);
		for (long int i = 0; i < n; ++i){
			if(s.empty() == true ){
				s.push(i);
			}
			else if(s.empty() == false && arr[s.top()] > arr[i]){
				s.push(i);
			}
			else if(s.empty() == false && arr[s.top()] < arr[i]){
				while(s.empty() == false && arr[s.top()] < arr[i]){
					arr[s.top()] = arr[i];
					s.pop();
				}
					s.push(i);
			}
		}
		while(s.empty() == false){
			arr[s.top()] = -1;
			s.pop();
		}
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
}