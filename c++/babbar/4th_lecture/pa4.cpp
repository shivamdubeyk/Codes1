/*
    4 3 2 1 
    4 3 2 1 
    4 3 2 1 
    4 3 2 1
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = n ;
        while (j >= 1)
        {
            cout << j <<" " ;
            j-- ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}