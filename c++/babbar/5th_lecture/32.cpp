// Program to print Fibonacci series from 0 to n.
#include<iostream>
using namespace std ;

int main(){

    int  n, a = 0, b = 1, nxttrm = a + b ;
    cout << "\nEnter n : " ;
    cin >> n ;

    
    cout << "\nFibonacci series : \n" ;
    cout << a << " " << b << " " ;
    
    for (int i = 1 ; i <= n - 2 ; i++ )
    {
        cout << nxttrm << " " ;

        a = b ;
        b = nxttrm ;
        nxttrm = a + b ;
    }
    return 0 ;
}
/*
output :- 
Enter n : 8

Fibonacci series : 
0 1 1 2 3 5 8 13 
*/