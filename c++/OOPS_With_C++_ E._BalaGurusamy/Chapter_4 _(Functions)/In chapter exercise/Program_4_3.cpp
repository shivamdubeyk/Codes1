// Recursion (Factorial)

#include <iostream>
#include <iomanip>
using namespace std ;

long fact (int n)
{
    if (n == 0)             // Base case 
        return 1 ;
    
    return (n * fact (n - 1)) ; // Recursive function call
}
int main()
{
    int num ;

    cout << "Enter a positive integer : " ;
    cin >> num ;
    cout << "Factorial of " << num << " is " << fact (num) ;
    return 0 ;
}