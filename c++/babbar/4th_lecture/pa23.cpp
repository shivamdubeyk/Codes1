/*
    1 1 1 1 1 
      2 2 2 2 
        3 3 3
          4 4
            5   

*/
// using WHILE loop
#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n, space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        space = n - i ;
        while (space)
        {
            cout  << "  " ;
            space-- ;
        }
        j = 1 ;
        while (j <= i)
        {
            cout  << i << " " ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}  
// using FOR loop  
/*
#include<iostream>
using namespace std ;

int main(){

    int i= 1, j, n, space ;

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    for ( i = 1; i <= n; i++)
    {
        for ( space = n - i ; space > 0 ; space--)
        {
            cout  << " " ;
        }
        for ( j = 1 ; j <= i ; j++)
        {
            cout  << i ;
        }
        cout << endl ;
    }
    
    return 0 ;
}*/