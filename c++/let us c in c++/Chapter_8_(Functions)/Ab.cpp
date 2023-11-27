// What will be the output of the following program

#include<iostream>
using namespace std ;

int check (int) ;

int main ()
{
    int i = 45 , c ;
    c = check (i) ;
    cout << c << "\n" ;
    return 0 ;
}

int check (int ch)
{
    if (ch >=45)
    {
        return (100) ;
    }
    else 
    {
        return (10*10) ;
    }
}
/*
output:- 
100 

*/