#include <iostream>
using namespace std;
int main() 
{
    int age;
    do {
        cout << "Enter your age (1 to 120): ";
        cin >> age;
        if (age < 1 || age > 120) 
          {
             cout << "Invalid age! Please enter a valid age.\n";
               }
}
     while (age < 1 || age > 120);  
       cout << "Valid age entered: " << age;
       
    return 0;
}
