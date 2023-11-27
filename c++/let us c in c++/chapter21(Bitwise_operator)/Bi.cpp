// Program to check 3rd and 5th bit are ON .If OFF then turn it ON of any 8 bit integer .
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
            
            cout << "0 " ;
            
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

Enter number : 28768
Binary Form of 28768 is 
0 1 1 0 0 0 0 0 
Status of 5th and 3rd bit is : ON OFF 
After modification : 
0 1 0 0 0 0 0 0 
*/