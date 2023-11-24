// program for both (pre and post) increment and decrement for variable i = 7; 
#include<iostream>
using namespace std ;

int main(){

    int  i = 7 ;
    cout << "i++ = "<< i++ << endl ;
    cout << "++i = "<< ++i << endl ;
    cout << "i-- = "<< i-- << endl ;
    cout << "--i = "<< --i << endl ;
    return 0 ;
}
/*
output :- 
i++ = 7
++i = 9
i-- = 9
--i = 7
*/