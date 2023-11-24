/*
    A 
    B B 
    C C C 
    D D D D 

*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 , j = 1 ;
    char ch = 'A' ; 
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while ( j <= i )
        {
            ch = 'A' + i - 1 ; 
            cout << ch << " " ; 
            j ++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
