//ASCII value            ASCII character.

#include<iostream>
using namespace std;
int main()
{
    int i = 1, a, dig1, dig2, dig3, Arm ;
    
    cout << "\nList of all armstrong numbers from 1 to 500:-" << endl << "------------------------------------------------";
    while (i<=500)
    {
        dig1 = i / 100 ;
        a = i % 100 ;
        dig2 = a / 10 ;
        dig3 = a % 10 ;

        Arm = dig1*dig1*dig1 + dig2*dig2*dig3 + dig3*dig3*dig3 ;
        
        if (Arm == i)
        {
            cout <<endl << i ;
        }
        i++ ;
    }
    return 0;
}