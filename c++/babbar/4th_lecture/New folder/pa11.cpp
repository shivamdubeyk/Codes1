/*
    A A A A 
    B B B B 
    C C C C 
    D D D D

*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 , j = 1 ;
    char ch = 'A' , ch1 ; 
    cout <<"\nEnter number of rows : " ;
    cin >> n ;
    ch1 = ch + n ;

    while ( i <= n )
    {
        j = 1 ;
        while ( j <= n )
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
