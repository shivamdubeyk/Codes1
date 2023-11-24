// Programming exercise 
// Attempt the following.
// Write a program to read two numbers from the keyboard and display the larger value
// on the screen.

#include<iostream>
using namespace std ;
int main ()
{
    int a, b ;
    
    cout << "Enter a : " ;
    cin >> a ;
    cout << "Enter b : " ;
    cin >> b ;

    if (a > b)
    {
        cout << "a " << a <<" is greater ." ;
    }
    else if ( a < b)
    {
        cout << "b " << b <<" is greater ." ;        
    }
    else 
        cout << "a " << a <<" is equal to b = " << b  ;
    return 0 ; 
}
/*
Output :-
Enter a : 39
Enter b : 34
a 39 is greater .
*/