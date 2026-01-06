#include <iostream>
using namespace std;
int main() 
{
    int num;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = num; i >= 1; i--) 
      {
        factorial = factorial * i;  
          }

    cout << "Factorial of " << num << " is: " << factorial;

    return 0;
}
