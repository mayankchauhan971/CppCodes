// ============================
// PLEASE TRY DEBUGGING THIS CODE ACCORDING TO ME THE CONCEPT IS CORRECT
// ============================


#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
bool areKAnagrams(string str1, string str2, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		if (areKAnagrams(str1, str2, k) == true)
			cout<<"1";
		else
			cout<<"0";
	}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
bool areKAnagrams(string str1, string str2, int k)
{
	int p = str1.length();
	int q = str2.length();
	if(p != q)
		return false;
	int count = 0;
	for (int i = 0;i <p ; ++i){
		bool isFound = false;
		for(int j = 0; j <p; j++){
			if(str1.at(i) == str2.at(j)){
				isFound = true;
				str1.erase (str1.begin()+i);
				i--;
				p--;
				str2.erase (str2.begin()+j);
				j--;
				q--;
				if(p == 0||q == 0)
					return false;
			}
		}
		if(!isFound)
			count++;
	}
	if(count == k)
		return true;
	else
		return false;
}







// ==========================
// ACCEPTED ANSWER
// ==========================
// bool areKAnagrams(string str1, string str2, int k)
// {
// 	int a=str1.length(),b=str2.length(),d=0;
// 	if(a!=b)
// 		return false;
// 	int p[256]={0};
// 	for(int i=0;i<a;i++)
// 	{
// 		p[str1[i]]++;
// 	}
//    // cout<<a<<"\n";
//    // cout<<d<<"\n";
// 	for(int i=0;i<a;i++)
// 	{
// 		if(p[str2[i]]>0)
// 			p[str2[i]]--;
// 		else
// 		{
// 			d++;
//           //  cout<<d<<" ";
// 		}
// 	}
// 	
// =================== AND ===========

// bool areKAnagrams(string str1, string str2, int k)
// {
//     if(str1.length()!=str2.length())
//     return false;
//     int arr1[26]={0};
//     int arr2[26]={0};
    
//     for(int i=0;i<str1.length();i++)
//         arr1[str1[i]-97]++;
//     for(int i=0;i<str2.length();i++)
//         arr2[str2[i]-97]++;
    
//     int c=k;
//     for(int i=0;i<26;i++)
//     {
//         if(arr1[i]>arr2[i])
//         {
//             c-=arr1[i]-arr2[i];
//         }
        
//     }