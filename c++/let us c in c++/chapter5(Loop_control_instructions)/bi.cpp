//Range of a data given (max value - main value).

#include<iostream>
using namespace std;
int main()
{
    int i = 1, num, num1, num2, num3, num4, num5, Max_value, Min_value ;
    
    cout << "\nEnter first value : ";
    cin >> num1 ;
    cout <<endl << "------------------------------------------------";
    Min_value = num1 ;
    Max_value = num1 ;
    while (i<5)
    {
        cout << "\nEnter next value : ";
        cin >> num ;
        if ( num < Min_value )
        {
            Min_value = num ;
        }
        if ( num > Max_value )
        {
            Max_value = num ;
        }
        i++ ;
    }
    cout << "Minimum number is : " << Min_value << endl << "Maximum number is : " << Max_value ; 
    return 0;
}