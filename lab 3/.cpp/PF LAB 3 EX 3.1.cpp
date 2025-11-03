#include<iostream>
using namespace std;
int main()
{
	int n, h, t, o;
	
	cout << "enter a three digit number:";
	cin >> n;
	
	o = n % 10;
	t = (n / 10) % 10;
	h = (n / 100) % 10;
	
	cout << "there are " << h << "hundreds," << t << "tens," << o << "ones in " << n;
	
	return 0;
}
