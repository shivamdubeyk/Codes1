// Program to exchange contents from 1 byte to another in a 16-Bit integer .
#include<iostream>
using namespace std ;

int main()
{
    int n , andmask , k ;
    char arrow = 25  ; 
    
    cout << "\nEnter number : " ;
    cin >> n ;     //21869      

    cout << "Binary Form of " << n << " Vs " << "Binary Form after swapping  is " << endl ;   

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
    
    int a = n << 8 , b = n >> 8 ; 

    int c = a | b ;

    cout << endl ;

    for (int  i = 15 ; i >= 0 ; i-- )
    {   
        if ( i == 7 )
        {
            cout << "   | " ;
            continue ;
        }
        cout << "| " ; 
    }
    cout << endl ;
    for (int  i = 15 ; i >= 0 ; i-- )
    {   
        if ( i == 7 )
        {
            cout << "   " << arrow << " " ;
            continue ;
        }
        cout << arrow << " " ; 
    }
    cout << endl ;
    for (int  i = 15 ; i >= 0 ; i-- )
    {   
        if ( i == 7 )
        {
            andmask = 1 << i ;

            k = c & andmask ; 

            k == 0 ? cout << "   0 " : cout << "   1 " ;
            
            continue ;
        }
        andmask = 1 << i ;

        k = c & andmask ; 

        k == 0 ? cout << "0 " : cout << "1 " ; 
    }
    
    return 0 ;
}
/*
output : 

Enter number : 99770
Binary Form of 99770 Vs Binary Form after swapping  is 
1 0 0 0 0 1 0 1    1 0 1 1 1 0 1 0 
| | | | | | | |    | | | | | | | | 
↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓    ↓ ↓ ↓ ↓ ↓ ↓ ↓ ↓ 
1 0 1 1 1 0 1 1    1 0 0 0 0 1 0 1 
*/