// Type cast operator 

#include<iostream>
// #include<iomanip>
using namespace std ;

int main ()
{
    int avg ;
    int sum = 8 ;
    float i = 2.096 ;

    avg = sum / i ;
    cout << "\navg = " << avg ;
    avg = sum/int(i) ;
    cout << "\ni = " << i ;
    i = int(i) ;
    cout << "\ni after conversion  = " << i ;
    cout << "\navg after conversion = " << avg ;

}   