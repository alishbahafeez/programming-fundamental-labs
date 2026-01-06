#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Enter an odd number of rows: ";
    cin >> n;

    if (n % 2 == 0) 
    {
        n = n - 1;
    }
    int i, j;
      for (i = 1; i <= n; i += 2) 
      {
        for (j = 1; j <= (n - i) / 2; j++) 
        {
            cout << " ";
              }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n - 2; i >= 1; i -= 2) 
    {
       for (j = 1; j <= (n - i) / 2; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

