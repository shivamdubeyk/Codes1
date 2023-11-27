// const Arguments

#include <iostream>
#include <iomanip>
using namespace std ;
void printfun (const int & ) ;
int main ()
{
    int num ;
    cout << "\nEnter numbers to be printed : " ;
    cin >> num ;
    printfun (num) ;
    return 0 ;
}

void printfun (const int & number)
{
    for (int i = 1 ; i <= number ; i++)
    {
        cout << i << setw(5) ;
    }
} 