/*
    1 1 1 1 
    2 2 2 2
    3 3 3 3
    4 4 4 4 
*/

#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 ,m =1;
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        int j =1 ;
        while ( j <= n )
        {
            cout << m << " " ; 
            j++ ; 
            m++ ; 
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}