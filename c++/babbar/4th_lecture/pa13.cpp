/*
    A B C D E 
    F G H I J 
    K L M N O 
    P Q R S T 
    U V W X Y    
*/

#include<iostream>
using namespace std ;

int main()
{

    int i= 1, j, n ;
    char ch = 'A';

    cout << "\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = 1 , ch ;
        while (j <= n)
        {
            cout << ch << " " ;
            j++ ;
            ch++ ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}