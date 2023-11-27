// Program to exchange contents from 1 byte to another in a 16-Bit integer .
#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    int n ;
    
    n = pow ( 2 , 0 ) + pow ( 2 , 2 ) +  pow ( 2 , 3 ) + pow ( 2 , 5 ) +  pow ( 2 , 6 ) + pow ( 2 , 8 ) +  pow ( 2 , 10 ) + pow ( 2 , 12 ) + pow ( 2, 14 ) ;           
    cout << endl << endl << n << endl ; 
    // int a = n >> 8 , b = n << 8 ; 
    return 0 ;
}