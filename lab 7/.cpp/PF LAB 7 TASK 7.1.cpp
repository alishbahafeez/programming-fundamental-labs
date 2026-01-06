#include <iostream>
using namespace std;
int getNumber() 
{
    int n;
        cout << "Enter value of N: ";
        cin >> n;
    return n;
}
    void printTable(int num) 
     {
        cout << "\nTable of " << num << endl;
    for (int i = 1; i <= 10; i++) 
      {
        cout << num << " x " << i << " = " << num * i << endl;
          }
              }

int main() 
{
    int N = getNumber();  

    for (int i = 1; i <= N; i++) 
    {
        printTable(i);     
    }

    return 0;
}

