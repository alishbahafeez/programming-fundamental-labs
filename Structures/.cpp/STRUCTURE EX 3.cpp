#include <iostream>
using namespace std;

struct Book 
{
    string name;
    int price;
};
int main() 
{
    Book b[5];

    for(int i = 0; i < 5; i++) 
     {
        cout << "\nBook " << i+1 << " Name: ";
        cin >> b[i].name;
        cout << "Price: ";
        cin >> b[i].price;
     }

    cout << "\nBooks with price greater than 500:\n";
    for(int i = 0; i < 5; i++) 
     {
        if(b[i].price > 500) 
         {
            cout << b[i].name << "  " << b[i].price << endl;
         }
     }
     
     cout << "\nNAME : ALISHBA HAFEEZ";
     cout << "\nROLL NO : 056";
     
    return 0;
}

