// Program to set odd bits to 1 of any 8 bit integer .
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
        if ( i == 1 || i == 3 || i == 5 || i == 7 )
        {
            int ormask = 1 << i ;

            int k = n | ormask ;

            k == 0 ? cout << "0 " : cout << "1 " ;
        }
        else if (i == 4 )
        {
            andmask = 1 << i ;

            k = n & andmask ; 

            k == 0 ? cout << "0    " : cout << "1    " ;
        }
        else 
        {
            andmask = 1 << i ;

            k = n & andmask ; 

            k == 0 ? cout << "0 " : cout << "1 " ;
        }
    }
    
    return 0 ;
}
/*
output : 

Enter number : 9796
Binary Form of 9796 Vs Binary Form after swapping  is
0 1 0 0    0 1 0 0
| | | |    | | | |
↓ ↓ ↓ ↓    ↓ ↓ ↓ ↓
1 1 1 0    1 1 1 0
*/