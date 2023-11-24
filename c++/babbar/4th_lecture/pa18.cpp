/*
    A B C 
    B C D 
    C D E   
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
        while (j <= n)
        {
            ch = 'A' + (i - 1) + (j - 1);
            cout << ch << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}