/*
    1 
    2 3
    3 4 5 
    4 5 6 7

*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 ,m = 1 ;
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        int j = 1, m = i ;
        while ( j <= i )
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
