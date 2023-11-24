/*
    * * * * * 
      * * * * 
        * * *
          * *
            *    
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n, space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        space = 1 ;
        while (space <= i - 1)
        {
            cout  << "  " ;
            space++ ;
        }
        j = n ;
        while (j >= i)
        {
            cout  << "* " ;
            j-- ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}