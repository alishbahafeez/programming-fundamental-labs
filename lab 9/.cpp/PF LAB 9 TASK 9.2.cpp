#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
     int A[3][3], B[3][3], Add[3][3], Mul[3][3];
     
     cout << "matrix A:\n";
     for(int i = 0; i < 3; i++)
     {
     	for(int j = 0; j < 3; j++)
     	{
     	    A[i][j] = rand() % 9 + 1;
	    cout << A[i][j] << " ";     	
	}
	cout << endl;
     }
     cout << "matrix B:\n";
     for(int i = 0; i < 3; i++)
     {
     	for(int j = 0; j < 3; j++)
     	{
                B[i][j] = rand() % 9 + 1;
                cout << B[i][j] << " ";
	     }
	cout << endl;
     }
     for(int i = 0; i < 3; i++)
     {
     	for(int j = 0; j < 3; j++)
     	{
     	Add[i][j] = A[i][j] + B[i][j];	
	}
     }
     for(int i = 0; i < 3; i++)
     {
     	for(int j = 0; j < 3; j++)
     	{
     	     Mul[i][j] = 0;
	for(int k = 0; k < 3; k++)
     	{
     	Mul[i][j] += A[i][k] * B[k][j];
	}
     }
}
     cout << "addition of (A + B):\n";
     for(int i = 0; i < 3; i++)
     {
     	for(int j = 0; j < 3; j++)
     	{
     	cout << Add[i][j] << " ";
	}
	cout << endl;
     }
     cout << "multiplication of (A * B):\n";
     for(int i = 0; i < 3; i++)
     {
     	for (int j = 0; j < 3; j++)
     	{
     		cout << Mul[i][j] << " ";
	}
	cout << endl;
     }
     return 0;
}


