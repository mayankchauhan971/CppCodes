"WRONG CODE"

// #include <iostream>
// using namespace std;

// int hanoiTower(int n, int a, int b, int c){
// 	if(n > 0){
// 		hanoiTower(n-1, a, c, b);
// 		cout << "Transferred from "<< a << "to"<< b <<endl;
// 		hanoiTower(n-1, b,a,c);
// 	}
// }

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;
// 		//shift n-1 things from a to b using c
// 		// shift nth thing from a to c
// 		// shift n-1 disc from b to c using a
// 		int a = 1;
// 		int b = 2;
// 		int c = 3;
// 		hanoiTower(n,a,b,c);
// 	}
// }