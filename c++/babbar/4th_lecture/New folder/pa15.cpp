/*
    A 
    B C 
    D E F 
    G H I J 

*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 , j = 1 ;
    char ch = 'A' , m = ch - 1 ;
    
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while ( j <= i )
        { 
            m = ch - 1 ;
            cout << ch << " " ; 
            j ++ ;
            ch++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
