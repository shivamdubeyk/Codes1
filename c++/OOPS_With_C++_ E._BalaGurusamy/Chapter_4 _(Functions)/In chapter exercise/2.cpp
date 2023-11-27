// Call by reference (int & a)

#include <iostream>
#include <iomanip>
using namespace std ;
void printfun (int & ) ;
int main ()
{
    int num ;
    cout << "\nEnter numbers to be printed : " ;
    cin >> num ;
    printfun (num) ;
    return 0 ;
}

void printfun (int & number)
{
    for (int i = 1 ; i <= number ; i++)
    {
        cout << i << setw(5) ;
    }
} 