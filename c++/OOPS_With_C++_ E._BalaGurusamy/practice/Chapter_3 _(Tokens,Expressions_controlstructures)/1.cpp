// Enum data types 

#include<iostream>
using namespace std ;

int main ()
{
    enum  colour 
    {
        violet , indigo, blue ,green , yellow , orange, red  
    } ;

    int a ;

    cin >> a ;
    switch (a)
    {
    case violet :
        cout << "\n0"; 
        break;

    case indigo :
    cout << "\n0" ;
    default:
        break;
    }
}