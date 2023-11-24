/*
    A 
    B B 
    C C C
    D D D D
    E E E E E   
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
        j = 1 , ch ;
        while (j <= i)
        {
            ch = 'A' + i - 1 ;
            cout << ch << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}