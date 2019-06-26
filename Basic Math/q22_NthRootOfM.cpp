// ==================
// MAKE SURE ITS FLOAT NOT INT ELSE IT WILL GIVE ERROR
// ==================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t,num,root;
	cin>>t;
	while(t--)
	{
		cin>>root>>num;
		float a = exp((double)(log(num)/(root)));
		if(floor(a)==ceil(a))
			cout<<a<<endl;
		else
			cout<<-1<<endl;
	}
}