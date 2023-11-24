//Print all trigonometric ratios of an angle. 

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double angle, rad ;

    cout << endl << "Enter The angle : " ;
    cin >> angle ;

    rad = angle * M_PI / 180 ;

    cout << "\nSin  : " << sin ( rad ) ;
    cout << "\nCos  : " << cos ( rad ) ;
    cout << "\nTan  : " << tan ( rad ) ;
    cout << "\nCosec: " << 1.0 / sin ( rad ) ;
    cout << "\nSec  : " << 1.0 / cos ( rad ) ;
    cout << "\nCot  : " << 1.0 / tan ( rad ) ;

    return 0; 
}