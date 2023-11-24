// Programming exercise 
/*
Write a program to evaluate the following investment equation
V = P(1+r)n
and print the tables which would give the value of V for various
of the following values of P, r and n:

    P: 1000, 2000, 3000,……………,10,000
    r: 0.10, 0.11, 0.12,………………….,0.20
    n: 1, 2, 3,…………………………………..,10

(Hint: P is the principal amount and V is the value of money at the end of n years. This equation 
can be recursively written as

    V = P(1 + r)
    P = V

In other words, the value of money at the end of the first year becomes the principal amount for 
the next year and so on)

*/

#include<iostream>
#include<cmath>

using namespace std ;

int main()
{
    int p , n ;
    float r , v ;

    for (p = 1000, r = 0.10 , n = 1 ; p <= 10000 , r = 0.20 ,n <= 10 ; p = p + 1000 , r = r + 0.1 , n++ )
    {
        v = p * (pow( ( 1 + r ), n)) ;
        cout << "At p = " << p << ",r = " << r << ",n = " << n << endl << "v= " << v << endl << endl  ;
    }
    
    return 0;
}

/*
output :-
At p = 1000,r = 0.2,n = 1
v= 1200

At p = 2000,r = 0.2,n = 2
v= 2880

At p = 3000,r = 0.2,n = 3
v= 5184

At p = 4000,r = 0.2,n = 4
v= 8294.4

At p = 5000,r = 0.2,n = 5
v= 12441.6

At p = 6000,r = 0.2,n = 6
v= 17915.9

At p = 7000,r = 0.2,n = 7
v= 25082.3

At p = 8000,r = 0.2,n = 8
v= 34398.5

At p = 9000,r = 0.2,n = 9
v= 46438

At p = 10000,r = 0.2,n = 10
v= 61917.4
*/