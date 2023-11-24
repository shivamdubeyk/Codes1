/*
Program to print pattern :- 

         *     
      *     *
   *     *     *
*     *     *     *
   *     *     *
      *     *
         *

*/

#include<iostream>
using namespace std ;

int main()
{
    int n = 4 , i ,sp , j ,m = 1 ;
    
    for ( i = 1 ; i <= n ; i++ )
    {
        for ( sp = 1; sp <= n-1 - (i - 1) ; sp++ )
        {
            cout << "   " ; 
        }
        for ( j = 1 ; j <= i ; j++ ,m++)
        {
            cout << "*" << "     " ;

        }
        cout << endl ;
    }

    for ( i = n - 1  ; i >= 1 ; i--)
    {
        for ( sp = 1 ; sp <= (n-1) -( i - 1) ; sp++ )
        {
            cout << "   " ;
        }
        for ( j = 1 ; j <= i ; j++ )
        {
            cout <<"*" << "     " ;

        }
        cout << endl ;
    }
    
    return 0 ;
}
/*
output: -

        *     
      *     *
   *     *     *
*     *     *     *
   *     *     *
      *     *
         *

*/