#include<iostream>
using namespace std;
int main() 
{
    float price, discount, finalPrice;

    cout << "Enter original price: ";
    cin >> price;

    if (price > 100) 
      {
        discount = price * 0.10;  
           }
    else 
    {
        discount = price * 0.05;   
    }
    finalPrice = price - discount;

    cout << "Discount = " << discount << endl;
    cout << "finalprice = " << finalPrice;

    return 0;
}

