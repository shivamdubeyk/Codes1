/*
Program to calculate amount by a = p ( 1 + r / q ) ^ nq
*/

#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    double n, q, p, r, a ;

    for ( int i = 1 ; i <= 10 ; i++ )
    {
        cout << "\nEnter p , r , n , q : " ;
        cin >> p >> r >> n >> q ;

        a = p * (pow( 1 + r / q , n * q )) ;
        cout << "a = " << a ;
    }
        
    return 0 ;
}
