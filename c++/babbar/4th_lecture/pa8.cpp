/*
    1 
    2 3
    4 5 6
    7 8 9 10    
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ,m = 1 ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while (j <= i)
        {
            cout << m <<" " ;
            j++ ;
            m++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}