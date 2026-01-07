#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string str = "by the way, it should be by the side walk";
    int str_length = str.length();

    cout << "Original string value = " << str << endl;
    for (int i = 0; i < str_length; i++) 
      {
        if (str[i] == 'b') 
         {
            if (str[i + 1] == 'y') 
	  {
                str.replace(i, 2, "BY");
            }
        }
    }
    cout << "After replacement string value = " << str << endl;

    return 0;
}

