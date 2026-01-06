#include<iostream>
using namespace std;
int main()
{
	
          float price,payment,months,payable,newpay,monthins,interest;
          
         cout<<"enter Vehicle price= ";
         cin>>price;
         cout<<"enter down payments= ";
         cin>>payment;
         cout<<"enter installment months= ";
         cin>>months; 
         payable=price-payment;
         
          if(months<=12)
            {
               interest=(10*payable)/100;
               cout<<interest; 
                }
          else if(months>12 && months <=24)
             {
                interest=(15*payable)/100;
                cout<<interest;
                  }
          else if(months>24 && months<=36)
             {
                 interest=(20*payable)/100;
                 cout<<interest;
                 }
          else if(months>36 && months<=48)
            {
                interest=(100*payable)/10;
                cout<<interest;
                  }
          else if(months>48 && months<=60)
            {
                interest=30*payable/100;
                cout<<interest;
                 }
           newpay=payable + interest;
           monthins=newpay/months;      

                 cout<<"\nNew Paybale amount= "<<newpay;
                 cout<<"\nmonthly installment= "<<monthins;
return 0;
}

