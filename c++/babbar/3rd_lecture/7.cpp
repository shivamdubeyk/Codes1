//Program to whether an entered character is small(a-z) , upper(A-Z) or a digit(0-9).

#include<iostream>
using namespace std;
int main(){
    
    char a;
    
    cout << "Enter a character from (a-z),(A-Z),(0-9) : " << endl;
    cin >> a ;

    if ((a>=97)&&(a<=122))
    {
        cout << a <<" is a small character.";
    }
    else if ((a>=65)&&(a<=90))
    {
        cout << a <<" is a capital character.";
    }
    else if ((a>=48)&&(a<=57))
    {
        cout << a <<" is a digit.";
    }
    else 
        cout << a <<" is a character out of the range.";
    
    return 0;
} 
