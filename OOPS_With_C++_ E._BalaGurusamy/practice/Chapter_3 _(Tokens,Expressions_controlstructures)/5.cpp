// Reference variables

#include<iostream>
#include<stdio.h>

using namespace std ;
int PrintFun(int & x ) ;
int main ()
{
    int a = 9 ,c ;
    a++ ;
    a = 8 ;
    c = PrintFun(a);
    cout << "value of a and x = " << c ;
}

int PrintFun(int & x)
{
    return (x) ;
}