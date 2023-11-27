//Area of triangle by Heron's Formula.

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double  L1, L2, L3 ;
    double  S, Area ;

    cout << endl << "Enter The First Length Of Triangle : " ;
    cin >> L1 ;
    
    cout << endl << "Enter The Second Length Of Triangle : " ;
    cin >> L2 ;
    
    cout << endl << "Enter The Third Length Of Triangle : " ;
    cin >> L3 ;

    S = (L1 + L2 + L3) / 2 ;
    Area = sqrt ( S * ( S - L1 ) * ( S - L2 ) * ( S - L3 ) );

    cout << "\nArea of triangle with sides : " << endl ;
    cout << " L1 = " << L1 << endl << " L2 = " << L2 << endl << " L3 = " << L3 << endl ;
    cout << "and semi perimeter = " << S << endl ;
    cout << "is = " << Area ;
    return 0; 
}