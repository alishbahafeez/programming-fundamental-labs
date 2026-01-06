#include<iostream>
using namespace std;
int main()
{
	int arr[10][10] = {
	{8,9,6,4,6,5,7,8,1,2},
	{4,6,3,1,1,2,8,7,4,5},
	{6,7,8,3,4,2,3,2,3,1},
	{2,3,2,1,4,0,6,7,8,4},
	{0,1,9,4,7,6,5,3,2,3},
	{2,1,2,1,3,4,3,7,8,6},
	{6,7,8,1,2,1,3,2,4,1},
	{5,1,2,1,1,1,3,4,7,6},
	{7,8,7,6,4,4,3,1,2,3},
	{1,8,2,1,1,7,8,8,0,1}
	};
	
	int num;
	int count = 0;
	
	cout << "minimum value is: ";
	cin >> num;
	
	for(int i = 0; i < 10; i++)
	{
	  for(int j = 0; j < 10; j++)
	  {
	     if(arr[i][j] == num)
	      {
	      	cout << "found at location [" << i << "][" << j << "]" << endl;
	      	count ++;
	      }
	  }
	}
	
	if(count == 0)
	{
	    cout << "value not found" << endl;
	}
	else
	{
	    cout << count <<" instances were found" << endl;
	}
           count = 0;
	cout << "maximum value is: ";
	cin >> num;
	
	for(int i = 0; i < 10; i++)
	{
	  for(int j = 0; j < 10; j++)
	  {
	     if(arr[i][j] == num)
	      {
	      	cout << "found at location [" << i << "][" << j << "]" << endl;
	      	count ++;
	      }
	  }
	}
	
	if(count == 0)
	{
	    cout << "value not found" << endl;
	}
	else
	{
	    cout << count << " instances were found" << endl;
	}
	cout << "the 10 * 10 array is: " << endl;
	for(int i = 0; i < 10; i++)
	{
	    for(int j = 0; j < 10; j++)
             {
                 cout << arr[i][j];
	    }
	    cout << endl;	    
	}
	return 0;
}
