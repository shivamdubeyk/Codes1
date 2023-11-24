// point out the errors ,if any

#include<iostream>
using namespace std ;

int addmult (int ,int) ;

int main ()
{
    int i = 3, j = 4, k, l ;
    k = addmult ( i, j ) ;
    l = addmult ( i, j ) ;
    cout << k << "  " << l ;
    return 0 ;
}

int addmult ( int ii, int jj )
{
    int kk, ll ;
    kk = ii + jj ;
    ll = ii * jj ;
    return ( kk, ll ) ;
} 

/*
output:- 
Errors
*/