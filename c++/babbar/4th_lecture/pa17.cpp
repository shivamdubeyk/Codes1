/*
    E 
    D E 
    C D E 
    B C D E 
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
        j = 1 ;
        while (j <= i)
        {
            ch = 'A' + (n - 1) - (i - 1) + (j - 1);
            cout << ch << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}