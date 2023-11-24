// Type cast operator  Program 3.5

#include<iostream>
// #include<iomanip>
using namespace std ;

int main ()
{
    int intvar = 25 ;
    float floatvar = 35.87 ;
    
    cout << "intvar = " << intvar ;
    cout << "\nFloatvar = " << floatvar ;
    cout << "\nFloatvar(intvar) = " << float(intvar) ;
    cout << "\nint(floatvar) = " << int(floatvar) ;
    return 0 ;
}   