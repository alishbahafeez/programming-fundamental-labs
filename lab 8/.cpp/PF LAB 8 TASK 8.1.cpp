#include <iostream>
using namespace std;
void square()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
void square(char ch)
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    cout << endl;
}
void square(char ch, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int main()
{
    square();        
    square('#');      
    square('@', 4);   

    return 0;
}


