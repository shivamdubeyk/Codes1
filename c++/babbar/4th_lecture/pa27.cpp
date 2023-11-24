/*
    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 * * 5 4 3 2 
    1 2 3 * * * * 5 4 3 
    1 2 * * * * * * 5 4 
    1 * * * * * * * * 5 
*/

#include<iostream>
using namespace std ;

int main(){

    int i = 1, j, n, k,space2 , space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while (j <= n - (i - 1))
        {
            cout  << j << " " ;
            j++ ;
        }
        space = 2 ;
        while (space <= i )
        {
            cout  << "* " ;
            space++ ;
        }
        space = 2 ;
        while (space <= i )
        {
            cout  << "* " ;
            space++ ;
        }
        k = 1 ;
        while (k <= n - i + 1)
        {
            cout  << n + 1 - k << " " ;
            k++ ;
        }
       

        i++ ;
        cout << endl ;
    }
    return 0 ;
}  
