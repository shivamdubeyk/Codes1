/*
    1 
    2 3 
    3 4 5 
    4 5 6 7    
*/

#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 ;
        while (j <= i)
        {
            cout << i + j - 1 <<" " ;
            j++ ;

        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}