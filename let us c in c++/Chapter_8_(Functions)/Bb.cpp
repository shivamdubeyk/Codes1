// What will be the output of the following program

#include<iostream>
using namespace std ;

void message () ;

int main ()
{
    int a ;
    a = message () ;
    return 0 ;
}

void message ()
{
    cout << "Viruses are written in C \n " ;
    return ;
}

/*
output:- 
Viruses are written in C 
*/