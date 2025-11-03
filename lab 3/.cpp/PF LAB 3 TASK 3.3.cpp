#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout << "enter a character (using getch()):";
	ch = getch();
	cout << "\n you entered:" << ch << endl;
	int X = ch;
	cout << "the ASCII value is:" << X << endl;
	
	cout << "enter a character (using getche()):";
	ch = getche();
	cout << "\n you entered:" << ch << endl;
	int Y = ch;
	cout << "the ASCII value is:" << Y << endl;
	
	cout << "enter a character (using getchar()):";
	ch = getchar();
	cout << "you entered:" << ch << endl;
	int Z = ch;
	cout << "the ASCII value is:" << Z;
	
	return 0;
}
