/*
    1 1 1
    2 2 2
    3 3 3
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
            cout << i <<" " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}