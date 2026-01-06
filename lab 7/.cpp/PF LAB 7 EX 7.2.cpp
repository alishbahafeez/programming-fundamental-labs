#include <iostream>
using namespace std;
bool isPrime(int num) 
{
        if (num <= 1) 
          { 
             return false;
          }
        for (int i = 2; i * i <= num; ++i) 
        { 
          if (num % i == 0) 
          {
               return false;
                }
            }
               return true;
   }
        void findAndPrintPrimes(int start, int end) 
         {
           cout << "Prime numbers between " << start << " and " << end << ": ";
        for (int i = start; i <= end; ++i) 
         {
           if (isPrime(i)) 
	{
           cout << i << " ";
          }
}
            cout << endl;
}
  int main() 
{
          int start, end;
             cout << "Enter the starting and ending numbers for the range: ";
             cin >> start >> end;
          if (start <= 1 || end <= 1 || start >= end) 
          {
              cout<<"Invalid range. Please enter valid starting and ending numbers.";
              return 1; 
 }
           findAndPrintPrimes(start, end);
 return 0;
}

