// Point out the errors , if any  

#include<iostream>
using namespace std ;

void message () ;

int main ()
{
    message ( message () ) ;
    return 0 ;
}

void message ()
{
    cout << "It's a small world after all... \n " ;
}

/*
output:- 
Errors 
*/