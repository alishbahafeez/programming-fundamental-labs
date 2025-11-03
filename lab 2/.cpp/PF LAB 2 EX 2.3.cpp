#include<iostream>
using namespace std;
int main()
{
	int y, square, cube;
	
	cout << "integer\tsquare\tcube" << endl;
	
	for(y = 0; y <= 10; y ++)
	{
		square = y * y;
		cube = y * y * y;
		
                  cout << y << "\t" << square << "\t" << cube << endl;		
	}
	
	return 0;
}
