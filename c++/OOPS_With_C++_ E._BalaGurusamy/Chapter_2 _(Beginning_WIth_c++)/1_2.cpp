// Debugging exercise 
// Identifying errors
#include<iostream>
using namespace std ;
int main ()
{
    short i = 2500, j = 3000 ;
    cout << "i + j = " >> - ( i + j) ;
    return 0 ; 
}
/*
Error:-
cout << "i + j = " >> - ( i + j) ;

correction :-
cout << "i + j = " << - ( i + j) ;

*/
