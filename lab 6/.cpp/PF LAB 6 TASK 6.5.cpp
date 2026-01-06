#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i <= 9)
      {
        int j = 0;
        while (j <= 9)
         {
           int k = 0;
           while (k <= 9)
            {
              int l = 0;
              while (l <= 9)
               {
                 cout << i << j << k << l << endl;
                 l++;
               }
                k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}

