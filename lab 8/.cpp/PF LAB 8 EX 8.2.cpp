#include <iostream>
using namespace std;
void generateNumbers(int n)
{
    if (n == 0)
        return;

    generateNumbers(n - 1); 
    cout << n << " ";
}

int main()
{
    int n;

    cout << "Enter value of N: ";
    cin >> n;

    generateNumbers(n);

    return 0;
}
