// programming exercise
/*
3.7: Write a program to evaluate the following function to 0.0001% accuracy
(b) SUM = 1 +(1/2)^2 + (1/3)^3 +(1/4)^4 + ………

*/

#include<iostream>
#include<cmath>
#define accuracy 0.0001
using namespace std ;

int main ()
{
    float sum = 0 , term ;
    int n ;

    for (int i = 0 ; ; i++)
    {
        term = pow((float(1)/i),i) ;
        sum += term ;   
        if (term <= accuracy)
        {
            break ;
        }
        
    }
    cout << "Sum = " << sum ;
}