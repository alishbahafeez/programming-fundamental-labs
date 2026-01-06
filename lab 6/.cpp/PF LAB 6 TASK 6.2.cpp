#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int l = 0; l <= 9; l++)
                {
                    cout << i << j << k << l << endl;
                }
            }
        }
    }
    return 0;
}

