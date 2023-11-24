/*
Program to print pattern :- 

         1     
      2     3     
   4     5     6     
7     8     9     10 
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
            cout << m << "     " ;

        }
        cout << endl ;
    }
    return 0 ;
}
/*
output: -


         1     
      2     3     
   4     5     6     
7     8     9     10 


*/