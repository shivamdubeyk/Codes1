#include<iostream>
using namespace std ;
extern int c ;
int fun1()
{
    c++ ;
    cout << "\nIncremented value :  " << c ;
    return 0 ;
}


int fun2()
{
    c-- ;
    cout << "\nDecremented value :  " << c  ;
    return 0 ;
}