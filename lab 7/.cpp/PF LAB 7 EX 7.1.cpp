#include <iostream>
using namespace std;
void generateFibonacci(int n) 
{
        int first = 0, second = 1, next;
         
         cout << "Fibonacci Series up to " << n << " terms: ";
        for (int i = 1; i <= n; ++i) 
        {
          if (i == 1) 
          {
            cout << first;
} 
       else if (i == 2) 
        {
             cout << ", " << second;
               } 
       else 
	    {
              next = first + second;
              cout << ", " << next;
              first = second;
              second = next;
                 }
                      }
              cout << endl;
        }
    int main() 
      {
         int terms;
           cout << "Enter the number of terms for the Fibonacci series: ";
           cin >> terms;
         generateFibonacci(terms);
return 0;
}
