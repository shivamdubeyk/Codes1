// Scope resolution operator (Program 3.1)

#include<iostream>
using namespace std ;

int m = 10 ; // global declaration of m  

int main ()
{
    int m = 20 ; // local declaration of m 
    {
        int k = m ; 
        int m = 30 ; // m declared to inner block 
        cout << "We are in inner block \n" ;
        cout << "k = " << k << "\n" ;
        cout << "m = " << m << "\n" ;
        cout << "::m = " <<::m << "\n" ;
    }
    cout << "\nWe are in outer loop !\n" ;
    cout << "m = " << m << "\n" ;
    cout << "::m = " << ::m << "\n" ;
    return 0 ;
}