#include <iostream>
using namespace std;
int main() 
{
       int arr[20] = {90, 87, 23, 3, 8, 34, 67, 75, 45, 90, 1, 2, 3, 4, 34, 44, 4, 78, 56, 12};
       int size = 20;
       int minVal = arr[0], minIndex = 0;
       int maxVal = arr[0], sum = 0;

           for(int i = 0; i < size; i++) 
	{
           sum += arr[i];
           if(arr[i] < minVal) minVal = arr[i], minIndex = i;
           if(arr[i] > maxVal) maxVal = arr[i];
           }

             cout << "The integer array is:\n";
           for(int i=0;i<size;i++)
	{
             cout<<arr[i];
             if(i!=size-1) cout<<", ";
           }
              cout << "\nThe minimum value is " << minVal << " found at index [" << minIndex << "]";
              cout << "\nThe maximum value is " << maxVal << " found at index [";
              bool first = true;
              for(int i=0;i<size;i++)
	   {
              if(arr[i]==maxVal)
	   {
              if(!first) cout<<"]["; else first=false;
              cout<<i;
              }
           }
               cout << "]";
               double avg = (double)sum/size;
               cout << "\nThe sum is " << sum;
               cout << "\nThe average is " << avg << endl;

         return 0;
    }

