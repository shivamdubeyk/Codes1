// Program to check whether the number is prime or not
#include<iostream>
using namespace std ;

int main(){

    int  n ;
    bool isprime = 0 ;
    cout << "\nEnter n : " ;
    cin >> n ;

    for (int i = 2 ; i < n ; i++ )
    {
        if ( n % i == 0 )
        {
            isprime = 1 ;
            break ;
        }
    }
    if (isprime == 0)
    {
        cout << n << "is a Prime number. " ;
    }
    else
    {
        cout << n << " is a not Prime number. " ;
    }
    return 0 ;
}
/*
output :- 
Enter n : 8

Fibonacci series : 
0 1 1 2 3 5 8 13 
*/