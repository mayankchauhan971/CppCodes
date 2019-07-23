#include<iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
 	int t;
 	cin >> t;
 	cin.ignore();
 	while(t--)
 	{
 		string s;
 		bool isBalanced = true;
 		cin >> s;
 		int len = s.length();
 		stack <char> s1;
 		for (int i = 0; i < len; ++i)
 		{
 			if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[')
 			{
 				s1.push(s.at(i));
 			}
 			if(s.at(i) == ')')
 			{
 				 if(s1.empty() == true){
 					cout << "not balanced" <<endl;
 					isBalanced = false;
 					break;
 				}
 				else if(s1.top() == '('){
 					s1.pop();
 				}
 				else{
 				    cout << "not balanced" <<endl;
 				    isBalanced = false;
 				    break;
 				}
 			}
 			if(s.at(i) == ']')
 			{
 				 if(s1.empty() == true){
 					cout << "not balanced" <<endl;
 					isBalanced = false;
 					break;
 				}
 				else if(s1.top() == '['){
 					s1.pop();
 				}
 				else{
 				    cout << "not balanced" <<endl;
 				    isBalanced = false;
 				    break;
 				}
 			}
 			if(s.at(i) == '}')
 			{
 				 if(s1.empty() == true){
 					cout << "not balanced" <<endl;
 					isBalanced = false;
 					break;
 				}
 				else if(s1.top() == '{'){
 					s1.pop();
 				}
 				else{
 				    cout << "not balanced" <<endl;
 				    isBalanced = false;
 				    break;
 				}
 			}
 		}
 		if(s1.empty() == true && isBalanced == true){
 			cout << "balanced" <<endl;
 		}
 		else if(isBalanced == true){
 			cout << "not balanced" <<endl;
 		} 

 	}   
	return 0;
}