/*
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E 
    A B C D E    
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ;
    char ch ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 , ch = 'A' ;
        while (j <= n)
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