#include<iostream>
using namespace std;
int main()
{
     int i = 10;
     while (i >= 0)
     {
       int j = 0;
       while (j <= i)
       {
     	cout << "*";
     	j++;
      }
      cout << "\n";
      i--;	
}
      return 0;
}

