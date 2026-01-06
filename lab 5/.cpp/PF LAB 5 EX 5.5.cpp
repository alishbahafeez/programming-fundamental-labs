#include <iostream>
using namespace std;
int main() 
{
    int choice;
    double balance = 0.0;
    double amount;

    while (true) {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
       
    switch (choice) 
    {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                } else {
                    cout << "Insufficient balance or invalid amount!\n";
                }
                break;

            case 3:
                cout << "Your current balance is: " << balance << endl;
                break;

            case 4:
                cout << "Thank you for using ATM. Goodbye!\n";
                return 0;  

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
