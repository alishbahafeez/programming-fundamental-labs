#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], i, j, num;
    bool found = false;

          cout << "Enter 9 elements for 3x3 array:\n";
          for(i = 0; i < 3; i++)
          for(j = 0; j < 3; j++)
          cin >> arr[i][j];

          cout << "Enter element to search: ";
          cin >> num;

          for(i = 0; i < 3; i++) 
          {
              for(j = 0; j < 3; j++) 
	   {
                 if(arr[i][j] == num) 
	      {
                     cout << "Element found at index [" << i << "][" << j << "]\n";
                     found = true;
                 }
              }
           }

                if(!found)
                cout << "Element not found\n";
    return 0;
}

