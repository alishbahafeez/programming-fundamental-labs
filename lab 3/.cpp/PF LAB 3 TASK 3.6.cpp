#include<iostream>
using namespace std;
int main()
{
	int t, bearable;
	
	cout << "enter a temperature:";
	cin >> t;
	
	bearable = (t >= 0 && t <= 60);
	     cout << "\n1 foe bearable, 0 foe unbearable: " << bearable << endl;
	     
	     return 0;
}
