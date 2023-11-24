// Programming exercise 
/*
Write a function using reference variables as arguments to swap the values of a pair of 
integers.
*/

#include<iostream>
using namespace std ;

int fun(int & x , int & y) ;  // declaration of a function (fun) with reference variables x and y.
int main ()
{
    int a, b ;

    cout << "\nEnter two numbers : " ; 
    cin >> a >> b ;
    cout << "\nBefore swapping : \n" ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    
    fun(a ,b) ; // Function calling 

    cout << "\nAfter swapping : \n" ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
}

int fun(int & x , int  & y)     // definition of function(fun) 
{
    int temp ;        // temporary variable to be used for swapping 
    temp = x ;
    x = y ;
    y = temp ;
    return 0 ;
} 
/*
output :-
Enter two numbers : 4 5 

Before swapping : 
a = 4
b = 5

After swapping : 
a = 5
b = 4
*/