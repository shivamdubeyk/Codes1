// Memory management operators (New and delete)

#include<iostream>

using namespace std ;

int main ()
{
    int *p ;
    p = new int ;
     
    int *q = new int ;
    float *r = new float ;

    *q = 25 ;
    *r = 7.5 ;

    int *s = new int(27) ;
    float *t = new float(5.6) ;

    // Creating an Array 
    int *u = new int[5] ;

    u[0] = 1 ;
    u[1] = 2 ;
    u[2] = 3 ;
    u[3] = 4 ;
    u[4] = 5 ;

    cout << "p = " << *p << endl ;
    cout << "q = " << *q << endl ;
    cout << "r = " << *r << endl ;
    cout << "s = " << *s << endl ;
    cout << "t = " << *t << endl ;
    cout << "u1 = " << u[0] << endl ;
    cout << "u2 = " << u[1] << endl ;
    cout << "u3 = " << u[2] << endl ;
    cout << "u4 = " << u[3] << endl ;
    cout << "u5 = " << u[4] << endl ;
    cout << "u6 = " << u[5] << endl ;

}