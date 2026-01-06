#include <iostream>
using namespace std;

int main()
{
    int a[10][10] = {
        {8,9,6,4,6,5,7,8,1,2},
        {4,6,3,1,1,2,8,7,4,5},
        {6,7,8,3,4,2,3,2,3,1},
        {2,3,2,1,4,0,6,7,8,4},
        {0,1,9,4,7,6,5,3,2,3},
        {2,1,2,1,3,4,3,7,8,6},
        {6,7,8,1,2,1,3,2,4,1},
        {5,1,2,1,1,1,3,4,7,6},
        {7,8,7,6,4,4,3,1,2,3},
        {1,6,3,8,9,2,4,3,1,0}
    };

    int num, count = 0;

    cout << "Enter a value to find in the 10 * 10 array : ";
    cin >> num;

    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(a[i][j] == num)
            {
                cout << "Found at location [" << i << "][" << j << "]" << endl;
                count++;
            }

    if(count == 0)
        cout << "Value not found" << endl;
    else
        cout << count << " instances were found." << endl;

    cout << "The 10 * 10 array is :" << endl;
    for(int i=0;i<10;i++)
    {
        cout << "{";
        for(int j=0;j<10;j++)
        {
            cout << a[i][j];
            if(j<9) cout << ",";
        }
        cout << "}," << endl;
    }

    return 0;
}

