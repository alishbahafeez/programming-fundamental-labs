#include <iostream>
using namespace std;
int main() 
{
    double balance = 1000.0;
    int choice;   
    cout << "Welcome to the Simple Bank!" << endl;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            double amount;
            cout << "Enter the deposit amount: $";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. Your new balance is: $" << balance << endl;
        } else if (choice == 2) {
            double amount;
            cout << "Enter the withdrawal amount: $";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
            } else {
                cout << "Insufficient funds. Withdrawal canceled." << endl;
            }
        } else if (choice == 3) {
            cout << "Your current balance is: $" << balance << endl;
        } else if (choice == 4) {
            cout << "Thank you for using the Simple Bank. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
    return 0;
}
