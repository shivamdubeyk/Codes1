// Reference variables

#include<iostream>
#include<stdio.h>

using namespace std ;
int PrintFun(int & x ) ;
int main ()
{
    int a = 9 ,c ;
    a++ ;
    int *p = &a ;
    int & b = *p ;
    a = 8 ;
    b = PrintFun(a);
    cout << "value of a and x = " << b ;
}

int PrintFun(int & x)
{
    return (x) ;
}