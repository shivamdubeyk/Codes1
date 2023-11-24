/*
    A B C D 
    E F G H 
    I J K L 
    M N O P

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
        while ( j <= n )
        { 
            cout << ch << " " ; 
            j ++ ;
            ch++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
