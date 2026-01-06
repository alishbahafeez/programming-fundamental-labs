#include <iostream>
using namespace std;
int IsPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
      {
          if (num % i == 0)
            {
            sum = sum + i;
        }
    }

    if (sum == num)
        return 1;   
else
        return 0;   
}

       int main()
{
    int N;

    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
      {
         if (IsPerfect(i) == 1)
           {
            cout << i << " is the perfect number" << endl;
            cout << "Division of " << i << " are ";

            for (int j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

