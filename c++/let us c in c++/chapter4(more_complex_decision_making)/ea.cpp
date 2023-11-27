// whether the character is lower case alphabet or not.
// whether the character is a symbol or not.
#include<iostream>
using namespace std ; 
int main()
{
    char ch;

    cout << "\nEnter Any Character.";
    cin >> ch ;

    (ch>=97)&&(ch<=122)?cout << ch << "\n Is A Lower Case Alphabet":cout << ch << "\n Is An Upper Case Alphabet";

    return 0;
} 