#include<iostream>
using namespace std;
int main()
{
          int a, b, sum, diff, prod, quot, rem;
          
          cout << "Enter first value: ";
          cin >> a;
          cout << "enter second value: ";
          cin >> b;
          
          sum = a + b;
          diff = a - b;
          prod = a * b;
          quot = a / b;
          rem = a % b;
          
          cout << "sum is " << sum << endl;
          sum = a + b;
          cout << "diff is " << diff << endl;
          diff = a - b;
          cout << "prod is " << prod << endl;
          prod = a * b;
          cout << "quot is " << quot << endl;
          quot = a / b;
          cout << "rem is " << rem << endl;
          rem = a % b;
          
          return 0;
}
