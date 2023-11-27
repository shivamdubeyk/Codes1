//Swapping of two numbers.

#include<iostream>
using namespace std;

int main(){
    
    int c, d ;

    cout << "\nEnter value of c : ";
    cin >> c ; //c = 3
    cout << "\nEnter value of d : ";
    cin >> d ; //d = 2

    c = c + d ; //c = 5 ; 
    d = c - d ; //d = 3 ;
    c = c - d ; //d = 2 ;
    
    cout << endl << "After swapping : " << endl ;
    cout << "C = " << c << "\nD = " << d ;
}