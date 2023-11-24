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
            ch = 'A' + j - 1 ; 
            cout << ch << " " ; 
            j ++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}
