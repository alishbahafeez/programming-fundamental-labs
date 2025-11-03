#include<iostream>
using namespace std;
int main()
{
	int a, b, rem, increment;
	
	cout << "enter value 1: ";
	cin >> a;
	cout << "enter value 2: ";
	cin >> b;
	
	rem = a % b;
	cout << "rem is " << rem << endl;
	
	increment = ++ rem;
	cout << "after increment " << increment << endl;
	
	return 0;
}
