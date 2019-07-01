#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		cin >> str;
		stack <string> s;
		string pusher = ""; //an empty string
		int n = str.length();
		for (int i = 0; i < n; ++i)
		{
			if(str.at(i) == '.'){
				s.push(pusher);
				s.push(".");
				pusher = "";
			}
			else{
				pusher.push_back(str.at(i));
			}
		}
		s.push(pusher);
		while(s.empty() != true){
			cout << s.top();
			s.pop();
		}
		cout << endl;
	}
}