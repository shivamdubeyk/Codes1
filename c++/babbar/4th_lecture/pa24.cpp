/*
    1 1 1 1 1 
      2 2 2 2 
        3 3 3
          4 4
            5   

*/
// using WHILE loop
#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n, value , space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        space = i - 1 ;
        while (space)
        {
            cout  << "  " ;
            space-- ;
        }
        j = i ;
        while (j <= n)
        {
            // value = j ;
            cout  << j << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}  
