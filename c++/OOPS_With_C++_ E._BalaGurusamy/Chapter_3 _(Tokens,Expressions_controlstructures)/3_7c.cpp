// Programming exercise 
/*
3.7: Write a program to evaluate the following function to 0.0001% accuracy
(c) Cosx = 1 – x^2/2! + x^4/4! – x^6/6! + ………
*/

#include<iostream>
#include<cmath>
using namespace std ;

#define accuracy 0.0001

long int fac(int n)
{
    if(n <= 1)
        return 1 ;
    else
        return n * fac ( n - 1 ) ;
}


int main()
{
    float y ,y1 ,x ,fx ;
    int n = 1 ;
    int m ;
    const float pi = 3.1416 ;
    
    cout << " Enter the value of angle in terms of degree : " ;
    cin >> x ;

    float temp = x ;
    
    if(x < 0)
        x = x * ( -1 ) ;
    x = (pi / 180) * x ;
    fx = 1 ;
    m = 2 ;
    
    float y2 ;
    long int h ;
    
    for(; ;)
    {
        h = fac(m) ;
        int factor = pow( -1 , n ) ;
        y1 = pow (x, m) ;
        y2 = (y1 / h) * factor ;
        fx += y2 ;
        
        if( y1 / h <= accuracy )
            break ;
        m = m + 2 ;
        n++ ;
    }
    cout << "\nCos(" << temp << ") = " << fx << "\n" ;
    return 0 ;
}