#include<iostream>
using namespace std;
int main()
{
	int a, b, c, sum, prod, aveg;
	
	cout << "enter three different integers: ";
	cin >> a >> b >> c;
	
	sum = a + b + c;
	prod = a * b * c;
	aveg = sum / 3;
	
	cout << "sum is " << sum << ", prod is " << prod << ", aveg is " << aveg << endl;
	
	return 0;
}
