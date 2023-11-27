// Debugging exercise 
// Identifying errors
#include<iostream>
using namespace std ;
int main ()
{
    int i = 0 ;
    i = i + 1 ;
    cout << i << " " ;
    \*comment \ * // i = i - 1 ;
    cout << i ; 
    return 0 ; 
}
/*
Error:-
\*comment\*

correction :-
/*comment*/
