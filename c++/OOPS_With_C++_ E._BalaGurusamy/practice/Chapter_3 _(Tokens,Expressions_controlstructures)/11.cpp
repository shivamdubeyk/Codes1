// Memory management operators (New and delete)

#include<iostream>
#include<iomanip>
using namespace std ;

int main ()
{
    int *p ;
    p = new int ;
     
    int *q = new int ;
    float *r = new float ;

    *q = 25 ;
    *r = 7.528746 ;

    int *s = new int(27) ;
    float *t = new float(5.6346346) ;

    // Creating an Array 
    int *u = new int[5] ;

    u[0] = 1 ;
    u[1] = 2 ;
    u[2] = 3 ;
    u[3] = 4 ;
    u[4] = 5 ;

    cout << "p = " << setw(5) << fixed << setprecision(2)<< *p << endl ;
    cout << "q = " << setw(5) << fixed << setprecision(2)<< *q << endl ;
    cout << "r = " << setw(5) << fixed << setprecision(2)<< *r << endl ;
    cout << "s = " << setw(5) << fixed << setprecision(2)<< *s << endl ;
    cout << "t = " << setw(5) << fixed << setprecision(2)<< *t << endl ;
    cout << "u1 = " << setw(4)  << u[0] << endl ;
    cout << "u2 = " << setw(4)  << u[1] << endl ;
    cout << "u3 = " << setw(4)  << u[2] << endl ;
    cout << "u4 = " << setw(4)  << u[3] << endl ;
    cout << "u5 = " << setw(4)  << u[4] << endl ;
    cout << "u6 = " << setw(4)  << u[5] << endl ;
    return 0 ;
}