// Dry Run exercise 
// What will happen when the program is run . 
#include<iostream>
using namespace std ;
int main ()
{
    int i = 0, j = 5 ;
    int modresult = 0 ; 
    int divresult = 0 ;
    
    modresult = i % j ;
    
    cout << modresult << " " ;
    divresult = i / modresult ;
    cout << divresult ; 
    return 0 ; 
}
/*
Output :-
0 
*/