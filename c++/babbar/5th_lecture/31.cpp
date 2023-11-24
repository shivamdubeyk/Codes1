// Program to print sum of all numbers from 1 to n.
#include<iostream>
using namespace std ;

int main(){

    int  n, sum = 1 ;
    cout << "\nEnter n : " ;
    cin >> n ;
    
    for (int i = 1 ; i <= n ; i++ )
    { 
        cout << sum << "+" << i << "=" ;
        sum += i ;
        cout << sum << endl ;
    }
    cout << "\nSum of numbers from 1 to " << n << " is = " << sum ;
    return 0 ;
}
/*
output :- 
Enter n : 7
1+1=2
2+2=4
4+3=7
7+4=11
11+5=16
16+6=22
22+7=29

Sum of numbers from 1 to 7 is = 29
*/