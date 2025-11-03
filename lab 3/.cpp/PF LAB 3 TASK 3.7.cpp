#include<iostream>
using namespace std;
int main()
{
	int age, purchase, eligible;
	
	cout << "enter customer age:";
	cin >> age;
	
	cout << "enter purchase amount:";
	cin >> purchase;
	
	eligible = (age > 50 || purchase > 20000);
	
	cout << "\n discount eligibility , 1 for eligible, 0 for uneligible: " << eligible << endl;
	
	return 0;
}
