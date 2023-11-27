// Debugging exercise 
// Find out Errors if any of the following lines contain .

#include<iostream>
using namespace std ;
int main ()
{
    int x, name, z, m, y ;
    /*(a)*/     cout << "x = " x ;
    /*(b)*/     m = 5 ; // n = 10 ; // s = m + n ;          //Note :- Second comment is a part of question.
    /*(c)*/     cin >> x ; >> y ;
    /*(d)*/     cout << \n " Name: " << name ;
    /*(e)*/     cout << " Enter value: " ; cin >> x ;
    /*(f)*/     /*Addition*/ z = x + y ;
    
    return 0 ;
}

/*
Errors :-
// (a) cout << "x = " << x ;
// (b) m = 5 ; // n = 10 ; // s = m + n ; 
// (c) cin >> x ; >> y ;
// (d) cout << \n " Name: " << name ;
// (e) No Error
// (f) No Error

Corrections : -
// (a) cout << "x = " x ;
// (b) m = 5 ; // n = 10 ; // s = m + n ;   Correct but only m = 5 ; wil execute because of incorrect commenting
// (c) cin >> x ; cin >> y ;  OR cin >> x >> y ;
// (d) cout << "\n Name: " << name ;   
// (e) No Error
// (f) No Error

*/