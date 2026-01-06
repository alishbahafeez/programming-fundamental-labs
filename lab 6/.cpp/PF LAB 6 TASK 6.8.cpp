#include <iostream>
using namespace std;
int main()
{
    int i = 0;

       do
        {
          int j = 0;
          do
        {
          int k = 0;
          do
        {
           int l = 0;
           do
        {
           cout << i << j << k << l << endl;
           l++;
            }
           while (l <= 9);
           k++;
            }
            while (k <= 9);
            j++;
            }
            while (j <= 9);
            i++;
             }
            while (i <= 9);
    return 0;
}

