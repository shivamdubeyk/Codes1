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

    int i= 1, j, n ;
    char ch = 'A';

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 , ch ;
        while (j <= i)
        {
            ch = 'A' + (i-1) + (j-1) ;
            cout << ch << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}