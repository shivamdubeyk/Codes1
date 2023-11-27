//Program to print all prime numbers from 1 to 300.
#include<iostream>
using namespace std ;

int main()
{
    bool isprime = 1 ;

    cout << "\nList of all prime numbers from 1 to 300 : " << endl << "----------------------------------------------" << endl;

    for ( int i = 1 ; i <= 300; i++)
    {
        bool isprime = 1 ;
        for (int  j = 2 ; j < i ; j++)
        {
            if (i % j == 0)
            {
                isprime = 0 ;
                break ;
            }
            
        }
        if ( isprime )
        {
            cout << i << endl ;
        }
    }
    return 0 ;
}