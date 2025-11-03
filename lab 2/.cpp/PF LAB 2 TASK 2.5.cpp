#include<iostream>
using namespace std;
int main()
{
	int a, b, sum, decrement;
	
	cout << "enter value 1: ";
	cin >> a;
	cout << "enter value 2: ";
	cin >> b;
	
	sum = a + b;
	cout << "sum is " << sum << endl;
	
	decrement = -- sum;
	cout << "after decrement " << decrement << endl;
	
	return 0;
}
