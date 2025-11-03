#include<iostream>
using namespace std;
int main()
{
         	int a, b, c, d;
         	
         	cout << "enter value 1:";
         	cin >> a;
         	cout << "enter value 2:";
         	cin >> b;
         	cout << "enter value 3:";
         	cin >> c;
         	cout << "enter value 4:";
         	cin >> d;
         	
         	float exp1 = a + b * c / (float)d;
         	float exp2 = (a + b) * c / (float)d;
         	float exp3 = ((a + b) * c) / (float)d;
         	float exp4 = (a + b) * (c / (float)d);
         	float exp5 = a + (b * c) / (float)d;
         	
         	cout << "\n ------ result ------" << endl;
         	
         	cout << "1. a + b * c / d = " << exp1 << endl;
         	cout << "2. (a + b) * c / d = " << exp2 << endl;
         	cout << "3. ((a + b) * c) / d = " << exp3 << endl;
         	cout << "4. (a + b) * (c / d) = " << exp4 << endl;
         	cout << "5. a + (b * c) / d = " << exp5 << endl;
         	
         	return 0;
}
