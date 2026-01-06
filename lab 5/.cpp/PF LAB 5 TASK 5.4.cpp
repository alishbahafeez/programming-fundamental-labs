#include <iostream>
using namespace std;
int main()
{
      int num;
      int factFor = 1, factWhile = 1;
      int i;

    cout << "Enter a positive integer : ";
    cin >> num;

    for(i = 1; i <= num; i++)
      {
          factFor = factFor * i;
      }
          i = 1;
          while(i <= num)
    {
          factWhile = factWhile * i;
          i++;
    }

     cout << "The factorial of " << num << " is : " << factFor << endl;

    return 0;
}
