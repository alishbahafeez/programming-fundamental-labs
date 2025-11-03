#include<iostream>
using namespace std;
int main()
{
	int a, b;
	
	cout << "enter first number:";
	cin >> a;
	cout << "enter second number:";
	cin >> b;
	
	int exp1 = a * a + 2 * a * b + b * b;
	int exp2 = a * a - 2 * a * b + b * b;
	
	cout << "(a + b)^2 = " << exp1 << endl;
	cout << "(a - b)^2 = " << exp2 << endl;
	
	return 0;
}
