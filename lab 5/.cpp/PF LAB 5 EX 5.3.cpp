#include <iostream>
using namespace std;
int main() 
{
    int sum = 0;

for (int i = 100; i >= 1; i -= 2) 
{
        sum = sum + i;  
    }

    cout << "Sum of even numbers from 100 to 1 is: " << sum << endl;

    return 0;
}

