#include<iostream>
using namespace std;
int main()
{
     int i = 0;
     while (i <= 10)
     {
       int j = 0;
       while (j <= i)
       {
     	cout << " ";
     	j++;
      }
      int k = 10;
      while(k > i)
      {
      	cout << "*";
      	k--;
      }
      cout << endl;
      i++;	
}
      return 0;
}

