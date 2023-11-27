// Program to check 3rd and 5th bit are ON .If ON then turn OFF of any 8 bit integer .
#include<iostream>
using namespace std ;

int main()
{
    int n , andmask , k ;
    char arrow = 25  ; 
    
    cout << "\nEnter number : " ;
    cin >> n ;

    cout << "Binary Form of " << n << " is " << endl  ;   

    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        // if ( i == 3 )
        // {
        //     andmask = 1 << i ;

        //     k = n & andmask ; 

        //     k == 0 ? cout << "   0 " : cout << "   1 " ;
            
        //     continue ;
        // }
        andmask = 1 << i ;

        k = n & andmask ; 

        k == 0 ? cout << "0 " : cout << "1 " ; 
    }
    cout << endl ;

    cout << "Status of 5th and 3rd bit is : " ;

    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 5 || i == 3 )
        {
            andmask = 1 << i ;

            k = n & andmask ; 

            if (k == 0)
            {
                cout << "OFF " ;
            }
            else
            {
                cout << "ON " ;
            }
        }
    }
    
    cout << "\nAfter modification : \n" ;
    for (int  i = 7 ; i >= 0 ; i-- )
    {   
        if ( i == 5 || i == 3 )
        {
            andmask = 1 << i ;

            k = n ^ andmask ; 

            cout << "1 " ;

            continue ; 
        }
        andmask = 1 << i ;

        k = n & andmask ; 

        k == 0 ? cout << "0 " : cout << "1 " ; 
    }
    return 0 ;
}
/*
output : 

Enter number : 233434
Binary Form of 233434 is
1 1 0 1 1 0 1 0
Status of 5th and 3rd bit is : OFF ON
After modification :
1 1 1 1 1 0 1 0
*/