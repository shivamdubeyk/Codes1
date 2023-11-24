/*
    * * * *
    * * * *
    * * * * 
    * * * *
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
            cout << "* " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}