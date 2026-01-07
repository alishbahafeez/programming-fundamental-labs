#include <iostream>
using namespace std;

struct Date 
{
    int day, month, year;
};

struct Student 
{
    string name;
    int roll;
    Date dob;
};

int main() 
{
    Student s;

    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Roll No: ";
    cin >> s.roll;
    cout << "Enter DOB (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Info:\n";
    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.dob.day << "-" << s.dob.month << "-" << s.dob.year << endl;

     cout << "\nNAME : ALISHBA HAFEEZ";
     cout << "\nROLL NO : 056";
     
    return 0;
}

