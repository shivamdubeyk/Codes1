//ASCII values of characters.
#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"\n ENTER ANY CHARACTER : ";
    cin>> ch;

    if ((ch>=65)&&(ch<=90))
    {
        cout<<"\nENTERED CHARACTER IS AN UPPER CASE LETTER !";
    }
    else if ((ch>=97)&&(ch<=122))
    {
        cout<<"\nENTERED CHARACTER IS A LOWER CASE LETTER !";
    }
    else if ((ch>=48)&&(ch<=57))
    {
        cout<<"\nENTERED CHARACTER IS A DIGIT !";
    }
    else if ((ch>=0)&&(ch<=47)||(ch>=58)&&(ch<=64)||(ch>=91)&&(ch<=96)||(ch>=123)&&(ch<=127))
    {
        cout<<"\nENTERED CHARACTER IS A SPECIAL SYMBOL!";
    }
    return 0;
    
}