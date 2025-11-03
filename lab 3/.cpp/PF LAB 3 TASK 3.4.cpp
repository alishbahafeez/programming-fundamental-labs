#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char ch1, ch2, ch3;
	
	cout << "enter first character:";
	cin >> ch1;
	cout << "enter second character:";
	cin >> ch2;
	cout << "enter  third character:";
	cin >> ch3;
	
	int sum = int(ch1) + int(ch2) + int(ch3);

	cout << "ASCII value of '" << ch1 << "'=" << int(ch1) << endl;
	cout << "ASCII value of '" << ch2 << "'=" << int(ch2) << endl;
	cout << "ASCII value of '" << ch3 << "'=" << int(ch3) << endl;
	
	cout << "\n sum of ASCII values are:" << sum;
	
	return 0;
	
}
