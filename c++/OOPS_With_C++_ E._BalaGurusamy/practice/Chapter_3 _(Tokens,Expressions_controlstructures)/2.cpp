// Enum data types 

#include<iostream>
using namespace std ;

int main ()
{
    enum  colour 
    {
        violet , indigo, blue ,green , yellow , orange, red 
    } ;
    enum colour magenta = (colour)7 ;
    int a ;

    cin >> a ;
    // switch (a)
    // {
    // case violet :
    //     cout << "\n0"; 
    //     break;

    // case indigo :
    // cout << "\n1" ;
    // case 
    // default:
    //     break;
    // }

    cout << "\nsuhf = " << magenta ;
}