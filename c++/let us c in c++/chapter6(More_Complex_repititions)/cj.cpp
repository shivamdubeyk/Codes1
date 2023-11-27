/*
Program to ramanujan number 
// Ramanujan number = a^3 + b^3 = c^3 + d^3  
*/
// Error : - giving correct values repeatedly

#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int i, j, k , l ;

    for ( i = 1 ; i <= 20 ; i++ )
    {
         for ( j = 1 ; j <= 20 ; j++ )
        {
             for ( k = 1 ; k <= 20 ; k++ )
            {
                for ( l = 1 ; l <= 20 ; l++ )
                {
                    if (( i != j )&& ( i != k) && (i != l) && ( j!= k ) && (j != l) && (k != l))
                    {
                        int x = pow(i,3) + pow(j,3) ;
                        int y = pow(k,3) + pow(l,3) ;
                        
                        if (x == y)
                        {
                            cout << "Ramanujan number  = " << x << endl ;
                        }
                        
                    }
                        
                }
                
            }
        }
    }
    return 0 ;
}
/*
outut:-
Enter x : 7
sum = 8.40882
*/