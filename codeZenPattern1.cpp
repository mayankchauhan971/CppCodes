#include <iostream>
using namespace std;

int printRow(int num , int count,int x)
{
	num = num + 1;
	cout<< num << " ";
	count = count + 1;
	if (count == x)
	{
		return 0;
	}
	else
	{
		printRow(num , count,x);
	}
}

int varCol()
{
	
}
int main()
{
	int x;
	cout << "enter the number of rows" << endl;
	cin >> x;
	int num = 1;
	int centre = 0;
	if(x%2 == 0)
	{
		centre = x/2;
	}
	else
	{
		centre = x/2 +1;
	}

	for (int rowVar = 1; rowVar <= centre; ++rowVar)
	{
		num = 2*(rowVar - 1)*x ;
		int count = 0;
		printRow(num ,count,x);
		cout<< endl;
		count = 0;
	}
	for (int varCol = centre + 1; varCol <= x ; ++varCol)
	{
		// num = 2*(varCol - 1)*(x-1) ;
		int count = 0;
		num = (x-1)*(x - (varCol-1))*2;
		printRow(num ,count,x);
		cout<< endl;
		count = 0;
	}
}