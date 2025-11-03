#include<iostream>
using namespace std;
int main()
{
	int a, b, sum, increment;
	
	cout << "enter value 1: ";
	cin >> a;
	cout << "enter value 2: ";
	cin >> b;
	
	sum = a + b;
	cout << "sum is " << sum << endl;
	
	increment = ++ sum;
	cout << "after increment " << increment << endl;
	
	return 0;
}
