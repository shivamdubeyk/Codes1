// Program to understand use of continue statement.
#include<iostream>
using namespace std ;

int main()
{
    for (int i = 1 ; i <= 5 ; i++ )
    {
        if ( i == 1 )
        {   
            continue ;
        }
        cout << i << endl ;
    }
    return 0 ;
}
/*
output :- 
2 
3 
4
5 
*/