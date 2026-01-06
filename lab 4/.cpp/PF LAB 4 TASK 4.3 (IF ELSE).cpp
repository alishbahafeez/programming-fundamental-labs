#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    char op;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    if (op == '+') {
        cout << "Result = " << num1 + num2;
    }
    else if (op == '-') {
        cout << "Result = " << num1 - num2;
    }
    else if (op == '*') {
        cout << "Result = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Error! Division by zero.";
    }
    else if (op == '%') {
        if (num2 != 0)
            cout << "Result = " << num1 % num2;
        else
            cout << "Error! Modulus by zero.";
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}

