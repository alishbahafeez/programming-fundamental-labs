#include <iostream>
using namespace std;
unsigned long long calculateFactorial(int num) 
{
unsigned long long factorial = 1; 
       
         for (int i = 2; i <= num; ++i) 
         {
             factorial *= i;
           }
              return factorial;
  }
int main() 
{
     int n;
           cout << "Enter a positive integer to calculate its factorial: ";
           cin >> n;
if (n < 0 ) 
{
           cout << "Factorial is not defined for negative numbers." << endl;
           return 1; 
}
           unsigned long long result = calculateFactorial(n);
           cout << "Factorial of " << n << " is: " << result << endl; return 0;
}

