#include<iostream>
#include<string>
using namespace std;
int main() 
{
          string line;
          int totalvowels, consonants, digits, spaces;
          totalvowels = consonants = digits = spaces = 0;
          int v_a, v_e, v_i, v_o, v_u;
          v_a = v_e = v_i = v_o = v_u = 0;
 
     cout << "Enter a line of string: "<< endl;
     getline(cin, line);
     for (int i = 0; i < line.length(); ++i) 
     {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o'
        || line[i] == 'u' ||
        line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O'
        || line[i] == 'U') 
     {
        if (line[i] == 'a' || line[i] == 'A') 
          {
             ++v_a;
}
       else if (line[i] == 'e' || line[i] == 'E') 
        {
           ++v_e;
} 
       else if (line[i] == 'i' || line[i] == 'I') 
        {
            ++v_i;
} 
       else if (line[i] == 'o' || line[i] == 'O') 
        {
            ++v_o;
}  
       else if (line[i] == 'u' || line[i] == 'U') 
        { 
           ++v_u;
}
            ++totalvowels;
} 
       else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' &&  
             line[i] <= 'Z'))  
{
        ++consonants;
} 
       else if (line[i] >= '0' && line[i] <= '9') 
         {
            ++digits;
} 
       else if (line[i] == ' ') 
        {
           ++spaces;
}
}
          cout << "Total Vowels: " << totalvowels << endl;
          cout << "Vowels: a " << v_a << endl;
          cout << "Vowels: e " << v_e << endl;
          cout << "Vowels: i " << v_i << endl;
          cout << "Vowels: o " << v_o << endl;
          cout << "Vowels: u " << v_u << endl;
          cout << "Consonants: " << consonants << endl;
          cout << "Digits: " << digits << endl;
          cout << "White spaces: " << spaces << endl;
          
return 0;
}
