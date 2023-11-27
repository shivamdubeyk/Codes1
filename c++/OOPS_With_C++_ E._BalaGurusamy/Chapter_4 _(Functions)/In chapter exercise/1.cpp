// Open parameter arguments (list_of_arguments)
#include<iostream>
#include<cstdarg>
using namespace std ;

int findmax (int count , ...)
{
    int max, value ;
    va_list list1 ; // declare variable argument list
    va_start (list1 , count) ; // start accessing variable list
    max = va_arg(list1 ,int) ; // Extract the first element of list 

    for ( int i = 1 ; i < count ; i++ )
    {
        value = va_arg (list1 , int) ; // extract each successive element from list
        if (max < value)
        {
            max = value ;
        }
        
    }
    va_end (list1) ; // End the access of the variable argument list
    return max ;
}

int main ()
{
    cout << findmax (5 , 13, 12, 311, 23323 ) ;
    return 0 ;
}