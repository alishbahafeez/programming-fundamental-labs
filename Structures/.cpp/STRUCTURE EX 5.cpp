#include <iostream>
using namespace std;

struct Marks 
{
    int m1, m2, m3;
};
void calculate(Marks m) 
{
    int total = m.m1 + m.m2 + m.m3;
    float avg = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;
}

int main() 
{
    Marks m;
    cout << "Enter 3 marks: ";
    cin >> m.m1 >> m.m2 >> m.m3;

    calculate(m);
    
    cout << "\nNAME : ALISHBA HAFEEZ";
    cout << "\nROLL : 056";
    
    return 0;
}

