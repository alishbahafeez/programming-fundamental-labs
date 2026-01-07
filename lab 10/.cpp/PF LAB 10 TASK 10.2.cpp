#include<iostream>
#include<string>
using namespace std;
int main()
{
         string str="Pakistan: rich heritage, warm hearts.";
         int mid_index = str.length()/2;
     
      cout<<"original string value = " <<str;
      cout<<endl<<"Middle Index of string is = "<<mid_index<<endl;
      str.insert(mid_index,"*******");
      cout << str << '\n';
      
return 0;
}

