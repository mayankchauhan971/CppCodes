#include <iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    for (int i = 1; i < n; ++i)
    {
            int j = i -1;
            int key = arr[i];
            while(j >=0 && arr[j] > key){
                // swap
                arr[j+1] = arr[j];  //earlier was swapping with i whcihc was not changing
                 j--;
            }
            arr[j+1] = key; //that is this decreased index is where we need to insert so j and not i
        // else do nothing
    }
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    insertionSort(n,arr);
}