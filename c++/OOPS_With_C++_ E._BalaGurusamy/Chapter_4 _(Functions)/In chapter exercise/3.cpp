// Inline functions
#include <iostream>
using namespace std ;

int sq ( int ) ;

int main ()
{
    int a ;
    cout << "Enter a : " ;
    cin >> a ;
    cout << sq (a) ;
    return 0 ;
}

inline int sq (int num)
{
    return (num * num) ;
}