#include <iostream>
using namespace std;
int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;        
    else
        return base * power(base, exponent - 1);
}

    int main()
{
    int b, e, result;

    cout << "Enter base: ";
    cin >> b;

    cout << "Enter exponent: ";
    cin >> e;

    result = power(b, e);

    cout << "Result is: " << result << endl;

    return 0;
}
