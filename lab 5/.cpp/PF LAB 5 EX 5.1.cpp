#include <iostream>
using namespace std;
int main() 
{
    int num;
    int sum = 0;

    cout << "Enter a Number : ";
    cin >> num;

    cout << "Even numbers less than or equal to " << num << " are : ";

    int i = 1;
    do {
        if (i % 2 == 0) 
          {  
            cout << i << "\t";
            sum += i;
        }
        i++;
    } while (i <= num);

    cout << "\nSum of even numbers = " << sum;

    return 0;
}

