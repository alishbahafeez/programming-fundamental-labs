#include <iostream>
using namespace std;
int main() 
{
    int a, b, c, d, e;
    int largest;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "Enter fourth number: ";
    cin >> d;
    cout << "Enter fifth number: ";
    cin >> e;

    largest = a;

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    if (d > largest)
        largest = d;
    if (e > largest)
        largest = e;

    cout << "Largest number is: " << largest;

    return 0;
}

