#include<iostream>
using namespace std;

struct Student 
{
    int roll;
    string name;
    float gpa;
};

int main() 
{
    Student s[3];

    for(int i = 0; i < 3; i++) 
      {
        cout << "\nStudent " << i+1 << endl;
        cout << "Roll No: ";
        cin >> s[i].roll;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "GPA: ";
        cin >> s[i].gpa;
      }

    cout << "\n--- Student Details ---\n";
    for(int i = 0; i < 3; i++) 
      {
        cout << s[i].roll << "  " << s[i].name << "  " << s[i].gpa << endl;
      }
      
      cout << "\nNAME : ALISHBA HAFEEZ";
      cout << "\nROLL NO : 056";
      
    return 0;
}

