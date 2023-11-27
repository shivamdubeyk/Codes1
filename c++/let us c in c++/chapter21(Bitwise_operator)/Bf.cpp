// Program to exchange contents between 4 bits of any 8 bit integer .
#include<iostream>
using namespace std ;

int main()
{
    int n , andmask , k ;
    char arrow = 25  ; 
    
    cout << "\nEnter number : " ;
    cin >> n ;     //21869      

    cout << "Binary Form of " << n << " Vs " << "Binary Form after swapping  is " << endl ;   

     for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 3 )
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
    
    int a = n >> 4 , b = n << 4 ; 

    int c = a | b ;

    cout << endl ;

    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 3 )
        {
            cout << "   | " ;
            continue ;
        }
        cout << "| " ; 
    }
    cout << endl ;
    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 3 )
        {
            cout << "   " << arrow << " " ;
            continue ;
        }
        cout << arrow << " " ; 
    }
    cout << endl ;
    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 3 )
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

Enter number : 9798
Binary Form of 9798 Vs Binary Form after swapping  is 
0 1 0 0    0 1 1 0 
| | | |    | | | | 
↓ ↓ ↓ ↓    ↓ ↓ ↓ ↓ 
0 1 1 0    0 1 0 0 

*/