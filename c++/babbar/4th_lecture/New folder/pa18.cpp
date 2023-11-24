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

    int n, i = 1 , j ;
    
    cout <<"Enter no. of rows : " ;
    cin >> n ;
    char ch = 'A' + n - 1 , m, ch1;
    cout << ch ;

    while ( i <= n )
    {
        j = 1 ; m = i ;

        while ( j <= i )
        { 
            cout << ch ;
            n-- ;
        }
        
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
