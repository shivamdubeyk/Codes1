//Rev of a five digit number.
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f, g, h, Num, Rev;

    cout << endl << "Enter any 5 digit Number : " ;
    cin >> Num ; //12345

    a = Num / 10000 ;   // 1         1st digit
    b = Num % 10000 ;   // 2345    
    c = b / 1000 ;      // 2         2nd digit
    d = b % 1000 ;      // 345       
    e = d / 100 ;       // 3         3rd digit
    f = d % 100 ;       // 45         
    g = f / 10 ;        // 4         4th digit
    h = f % 10 ;        // 5         5th digit

    Rev = a + c + e + g + h ;

    cout << "\nRev of digits of "<< Num << " is " << Rev << endl ;
    return 0; 
}