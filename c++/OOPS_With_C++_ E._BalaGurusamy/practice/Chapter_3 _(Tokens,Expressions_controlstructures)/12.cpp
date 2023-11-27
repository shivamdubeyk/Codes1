// Memory management operators (New and delete)

#include<iostream>
// #include<iomanip>
using namespace std ;
ostream & symbol (ostream & output )
{
    return output << "Rs." ;
}

int main ()
{
    cout << endl << 20 << symbol ;
    cout << endl << 30 << symbol ;
    cout << endl << 40 << symbol ;
    cout << endl << 50 << symbol ;
    cout << endl << 60 << symbol ;
    cout << endl << 70 << symbol ;
    return 0 ;
}