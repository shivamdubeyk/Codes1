// Program to check whether 3rd ,6th and 7th bit is on or off.
#include<iostream>
using namespace std ;

int main()
{
    int n , andmask , k ;
    
    cout << "\nEnter number : " ;
    cin >> n ;

    cout << "Binary Form of " << n << " is " << endl ;   

    for (int  i = 15 ; i >= 0 ; i-- )
    {   
        if ( i == 7 )
        {
            andmask = 1 << i ;

            k = n & andmask ; 

            k == 0 ? cout << "   0 " : cout << "   1 " ;
            
            continue ;
        }
        andmask = 1 << i ;

        k = n & andmask ; 

        k == 0 ? cout << "0 " : cout << "1 " ; 
    }

    int a = n & ( 1 << 3 ) ;

    if (a == 0 )
    {
        cout << "\n3rd Bit is OFF! " ; 
    }
    else
    {
        cout << "\n3rd Bit is ON! " ;
    }

    int b = n & (1 << 6) ;

    if ( b == 0 )
    {
        cout << "\n6th Bit is OFF! " ; 
    }
    else
    {
        cout << "\n6th Bit is ON! " ;
    }

    int c = n & ( 1 << 7 ) ;

    if ( c == 0 )
    {
        cout << "\n7th Bit is OFF! " ; 
    }
    else
    {
        cout << "\n7th Bit is ON! " ;
    }
    return 0 ;
}