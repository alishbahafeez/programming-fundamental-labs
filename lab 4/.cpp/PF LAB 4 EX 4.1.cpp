#include <iostream>
using namespace std;
int main() 
{
    int quantity;
    const int unitPrice = 100;
    float totalCost, discount = 0;
    
    cout << "Enter the quantity you want to purchase: ";
    cin >> quantity;

    totalCost = quantity * unitPrice;

    if (totalCost > 1000) 
      {
          discount = totalCost * 0.10; 
            }
    cout << "Total cost: " << totalCost << endl;
    cout << "Discount: " << discount << endl;
    cout << "Amount to pay after discount: " << totalCost - discount << endl;

    return 0;
}

