/*
              1 
            1 2 1 
          1 2 3 2 1 
        1 2 3 4 3 2 1 
      1 2 3 4 5 4 3 2 1 
    1 2 3 4 5 6 5 4 3 2 1 
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ,k , space ;

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
            cout  << j << " " ;
            j++ ;
        }
        k = i - 1 ;
        while (k)
        {
            cout  << k << " " ;
            k-- ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}  
