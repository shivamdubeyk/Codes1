// Default arguments
#include <iostream>
using namespace std ;

int main ()
{
    float amount ;
    float value (float p, int n , float r = 0.15) ;  // Prototype 
    void printline (char ch = '*' , int len = 40 ) ; // Prototype

    printline () ;                                   // use default value for arguments
    amount = value ( 5000.00, 5) ;                    // default for 3rd argument 
    cout << "\nFinal value = " << amount << "\n\n" ;
    amount = value ( 10000.00 ,5 ,0.30 ) ;            // Pass all arguments explicitly 
    cout << "Final value = " << amount << "\n\n" ;
    printline ( '=' ) ;                                 // use default value for second argument
    
    return 0 ;    
}

float value (float p ,int n , float r)
{
    int year = 1 ;
    float sum = p ;
    while ( year <= n )
    {
        sum = sum * (1 + r) ;
        year ++ ;
    }
    return (sum) ;
}

void printline (char ch , int len)
{
    for (int i = 1 ; i <= len ; i++)
        cout << ch ;
    
    cout << endl ;

}