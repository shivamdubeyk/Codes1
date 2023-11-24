/*
    4 3 2 1 
    4 3 2 1
    4 3 2 1
    4 3 2 1
*/

#include<iostream>
using namespace std ;

int main(){

    int n, i = 1;
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        int j = n ;
        while ( j >= 1 )
        {
            cout << j << " " ; 
            j-- ;  
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}