#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    //insertion sort
    // if(arr[1] < arr[0])--> insert 1 before 0
    for (int i = 1; i < n; i++){
      int var = arr[i];
      int j = i -1;
      while(j >= 0 && arr[j] > var){
        arr[j+1] = arr[j];
        j= j - 1;
      }
      arr[j+1] = var;
    }
    for (int i = 0; i < n; ++i)
    {
      cout << arr[i] << " "; 
    }
  }
}