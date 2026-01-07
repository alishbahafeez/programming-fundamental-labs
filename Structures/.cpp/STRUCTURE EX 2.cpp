#include <iostream>
using namespace std;

struct Employee 
{
    float monthlySalary;
};
int main() 
{
    Employee e;
    cout << "Enter monthly salary: ";
    cin >> e.monthlySalary;

    cout << "Annual Salary = " << e.monthlySalary * 12 << endl;
    
    cout << "\nNAME : ALISHBA HAFEEZ";
    cout << "\nROLL NO : 056";
    
    return 0;
}

