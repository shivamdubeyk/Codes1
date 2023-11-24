/*
    A 
    B C 
    D E F 
    G H I J 
    K L M N O   
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ;
    char ch = 'A';

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while (j <= i)
        {
            cout << ch << " " ;
            j++ ;
            ch++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}