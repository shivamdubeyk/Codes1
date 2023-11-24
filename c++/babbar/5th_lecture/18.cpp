// program for post increment operator (i++)
#include<iostream>
using namespace std ;

int main(){

    int  i = 3, a = 2 ;
    int sum = a + (++i) ;
    cout << "sum = "<<  sum << endl << "i = "<< i ;
    return 0 ;
}
/*
output :- 
sum = 6
i = 4
*/