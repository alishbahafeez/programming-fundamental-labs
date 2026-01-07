#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string word;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> word;
    int len = word.length();
    for (int i = 0; i < len / 2; i++) 
     {
        if (word[i] != word[len - i - 1]) 
         {
            isPalindrome = false;
            break;
        }
    }
       if (isPalindrome)
        cout << "The word is a palindrome." << endl;
    else
        cout << "The word is not a palindrome." << endl;

    return 0;
}

