//  Programming exercise 
//  Attempt the following.
/*  Write a program to read the values a, b and c and display x, where
    x = a / (b –c).

    Test the program for the following values:
    (a) a = 250, b = 85, c = 25
    (b) a = 300, b = 70, c = 70
*/

#include<iostream>
using namespace std ;
int main ()
{
    double a, b, c, x ;
    
    cout << "Enter a : " ;
    cin >> a ;
    cout << "Enter b : " ;
    cin >> b ;
    cout << "Enter c : " ;
    cin >> c ;

    if ( (b- c) != 0 )
    {
        x = a / (b - c) ;
        cout << "X = " << x ;
    }
    else
        cout << "X is infinite ." ;
    return 0 ; 
}
/*
Output :-
Enter a : 250
Enter b : 85
Enter c : 25
X = 4

Enter a : 300
Enter b : 70
Enter c : 70
X is infinite .
*/