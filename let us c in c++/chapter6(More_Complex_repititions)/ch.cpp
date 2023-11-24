/*
Program to print pythagorean triplets . 
*/

#include<iostream>
using namespace std ;

int main()
{
    int i, j, k ;

    for ( i = 1 ; i <= 30 ; i++ )
    {
         for ( j = 1 ; j <= 30 ; j++ )
        {
             for ( k = 1 ; k <= 30 ; k++ )
            {
                if ( i * i + j * j == k * k)
                {
                    cout << " i = " << i <<", j = "<< j <<", k = "<< k << endl ;
                }
                
            }
        }
    }
    return 0 ;
}
/*
outut:-
 i = 3, j = 4, k = 5
 i = 4, j = 3, k = 5
 i = 5, j = 12, k = 13
 i = 6, j = 8, k = 10
 i = 7, j = 24, k = 25
 i = 8, j = 6, k = 10
 i = 8, j = 15, k = 17
 i = 9, j = 12, k = 15
 i = 10, j = 24, k = 26
 i = 12, j = 5, k = 13
 i = 12, j = 9, k = 15
 i = 12, j = 16, k = 20
 i = 15, j = 8, k = 17
 i = 15, j = 20, k = 25
 i = 16, j = 12, k = 20
 i = 18, j = 24, k = 30
 i = 20, j = 15, k = 25
 i = 20, j = 21, k = 29
 i = 21, j = 20, k = 29
 i = 24, j = 7, k = 25
 i = 24, j = 10, k = 26
 i = 24, j = 18, k = 30
*/