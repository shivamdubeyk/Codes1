/*
    1 2 3 
    4 5 6 
    7 8 9     
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while (j <= n)
        {
            cout << n * (i - 1) + j <<" " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}