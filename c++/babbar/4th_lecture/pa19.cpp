/*
            * 
          * * 
        * * *
      * * * *
    * * * * *    
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n, space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        space = n - i ;
        while (space)
        {
            cout  << "  " ;
            space-- ;
        }
        j = 1 ;
        while (j <= i)
        {
            cout  << "* " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}