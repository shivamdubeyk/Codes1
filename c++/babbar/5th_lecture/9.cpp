//Program to print a&b ,a|b ,~a ,~b , a^b for a = 4, b = 6 ;

#include<iostream>
using namespace std ;

int main(){

    int a = 4, b = 6, c = a & b , d = a | b , e = a ^ b ;

    cout << c << endl ;
    cout << d << endl ;
    cout << ~a << endl ;
    cout << ~b << endl ;
    cout << e << endl ;

    return 0 ;
}
/*
output :-
4
6
-5
-7
2 
*/