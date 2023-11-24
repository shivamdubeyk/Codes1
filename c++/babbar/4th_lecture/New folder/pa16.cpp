/*
    A 
    B C 
    C D E 
    D E F G 
    E F G H I 

*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 , j = 1 ;
    char ch = 'A' , m ;
    
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ; m = i ;
        while ( j <= i )
        { 
            ch = 'A' + m - 1 ;
            cout << ch << " " ; 
            j ++ ;
            m++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
