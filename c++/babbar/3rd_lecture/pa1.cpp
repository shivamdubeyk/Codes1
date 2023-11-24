/*
    * * * *
    * * * *
    * * * *
    * * * *
*/

#include<iostream>
using namespace std ;

int main(){

    int n, i = 1, j = 1;
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while ( j <= n )
        {
            cout << "* " ; 
            j++ ;  
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}