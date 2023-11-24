//Program to check n is prime or not. 
// not genuine code must execute it before any use . 

#include<iostream>
using namespace std;
int main(){
    
    int n, i=2 ;
    
    cout << "Enter the number: " ;
    cin >> n ;

    while (i < n )
    {   
        if (n%i==0)
        {
            cout << endl << n <<" is not prime (is divisible) for " << i  ;
            i++ ;
        }
        else
        {   
            cout << endl << n <<" is prime(is not divisible) for " << i ;
            i++ ; 
        }
    }
    return 0;
} 