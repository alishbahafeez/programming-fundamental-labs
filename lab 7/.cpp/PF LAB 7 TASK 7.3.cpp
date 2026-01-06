#include <iostream>
using namespace std;
int Largest(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}

int main()
{
    int a, b, c, d;

    cout << "Enter four integers" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int result = Largest(a, b, c, d);

    cout << "The largest number is " << result;

    return 0;
}

