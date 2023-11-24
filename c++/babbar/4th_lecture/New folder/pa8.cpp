/*
    1 
    2 3
    4 5 6 
    7 8 9 10

// by number of rows entered .
*/
#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 ,m = 1 ;
    cout <<"\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        int j = 1 ;
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
/*
    1 
    2 3
    4 5 6 
    7 8 9 10
*/
// by last number entered .

/*#include<iostream>
using namespace std ;

int main(){

    int n, i = 1 ,m = 1 ;
    cout <<"\nEnter last number : " ;
    cin >> n ;

    while ( i <= n && m <= n )
    {
        int j = 1 ;
        while ( j <= i && m <= n )
        {
            cout << m << " " ; 
            j++ ;  
            m++ ;
        }
        cout << endl ;
        i++ ;
    }
    return 0 ;
}*/