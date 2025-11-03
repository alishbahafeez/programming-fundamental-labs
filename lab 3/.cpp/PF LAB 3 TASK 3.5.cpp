#include<iostream>
using namespace std;
int main()
{
	int x, y, E, F, G, FE, GE;
	
	cout << "enter first integer (x):";
	cin >> x;
	
	cout << "enter second integer (y):";
	cin >> y;
	
	E  = (x == y);
	F  = (x >  y);
	G  = (x <  y);
	FE = (x >= y);
	GE = (x <= y);
	
	cout << "\n ------ comparison results ------" << endl;
	
	cout << "x == y : " << (x == y) << endl;
	cout << "x >  y : " << (x > y)  << endl;
	cout << "x <  y : " << (x < y)  << endl;
	cout << "x >= y : " << (x >= y) << endl;
	cout << "x <= y : " << (x <= y) << endl;
	
	return 0;
	
}
