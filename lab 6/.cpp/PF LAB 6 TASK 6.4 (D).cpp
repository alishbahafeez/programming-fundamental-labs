#include<iostream>
using namespace std;
int main()
{
     int i = 0;
     while (i <= 10)
     {
       int j = 10;
       while (j > i)
       {
     	cout << " ";
     	j--;
      }
      int k = 0;
      while(k < i)
      {
      	cout << "*";
      	k++;
      }
      cout << endl;
      i++;	
}
      return 0;
}

