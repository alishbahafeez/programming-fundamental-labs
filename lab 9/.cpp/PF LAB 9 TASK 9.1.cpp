#include<iostream>
using namespace std;
int main()
{
	int attendence[5];
        cout << "enter attendence for 5 days (1 for present, 0 for absent):\n";
        
       for(int i = 0; i < 5; i++)
       {
       	cout << "day " << i + 1 << ": ";
       	cin >> attendence[i];
	}
         cout << "\nattendence record:\n";
         for(int i = 0; i < 5; i++)
         {
         	cout << "day " << i + 1 << " = " << attendence[i] << endl;
           }	
      return 0;		
}


