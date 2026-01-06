#include<iostream>
using namespace std;
int main ()
{
         int a;
         cout<<"enter a: ";
         cin>>a;

         int b;
         cout<<"enter b: ";
         cin>>b;

         char c;
         cout<<"enter operator: ";
         cin>>c;
         
         if(c=='+')
           {
           cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a+b;
             }
         else if(c=='-')
          {
           cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a-b; 
	  }
         else if(c=='*')
             {
           cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a*b;
              }
         else if(c=='%')
           {
           cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a%b;
              }
         else if(c=='/')
             {
           cout<<a<<"\n"<<c<<"\n"<<b<<"\n"<<a<<c<<b<<"="<<a/b;
                }
         else 
            {
           cout<<"invalid opertaors";
               }
             }
             
