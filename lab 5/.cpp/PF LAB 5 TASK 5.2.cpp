#include <iostream>
using namespace std;
int main() 
{
       int num;
       int sum=0;
            cout<<"Enter a Number : ";
            cin>>num;
            cout << "Even number less than or equal to "<<num<<" are : ";

       int i = 1;
       while (i<=num) 
{
       if(i%2 == 0) 
       { 
             cout<<i<<"\t";
             sum += i;
}
      i++;
}
             cout<< "\n sum of even numbers = " <<sum;
}
