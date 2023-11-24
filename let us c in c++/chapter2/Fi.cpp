//Minimum number of notes required (Currency). 

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n1, n2, n3, n4, n5, no100, no50, no10, no5, no2, no1, amount;

    cout << "\nEnter the amount : " ;
    cin >> amount ;

    no100 = amount / 100 ;
    n1 = amount % 100 ;
    no50 =  n1 / 50 ;
    n2 = n1 % 50 ;
    no10 =  n2 / 10 ;
    n3 = n2 % 10 ;
    no5 = n3 / 5 ;
    n4 = n3 % 5 ;
    no2 = n4 / 2 ;
    no1 = n4 % 2;

    cout << "Number of 100 Rs. notes required : " << no100 <<endl ;
    cout << "Number of 50 Rs. notes required  : " << no50 <<endl ;
    cout << "Number of 10 Rs. notes required  : " << no10 <<endl ;
    cout << "Number of 5 Rs. notes required   : " << no5 <<endl ;
    cout << "Number of 2 Rs. notes required   : " << no2 <<endl ;
    cout << "Number of 1 Re. notes required   : " << no1 <<endl ;
}