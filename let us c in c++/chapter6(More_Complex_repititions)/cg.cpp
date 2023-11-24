/*
Program to calculate amount by a = p ( 1 + r / q ) ^ nq
*/

#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    double x, trm, sum = 0  ;

    cout << "\nEnter x : " ;
    cin >> x ;

    for ( int i = 1 ; i <= 7 ; i++ )
    {
        trm = 0 ;
        if ( i == 1 )
        {
            trm = (x - 1 / x ) ;
            sum += trm ;
            continue ;
        }
        trm = 0.5 * pow((x - 1)/x, i ) ;
        sum += trm ;
    }
    cout << "sum = " << sum ;        
    return 0 ;
}
/*
outut:-
Enter x : 7
sum = 8.40882
*/