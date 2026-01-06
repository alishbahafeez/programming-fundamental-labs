#include <iostream>
using namespace std;
int main() 
{
        int N;
           cout << "Enter a number to generate a multiplication table: "; cin >> N;
           cout << "Multiplication table for " << N << ":" << endl;

        for (int i = 1; i <= 10; ++i) 
           {
              cout << N << " x " << i << " = " << N * i;
        if (i != 10) 
           {
              cout << endl; 
                } 
     } 
              cout << endl; 
return 0;
}
