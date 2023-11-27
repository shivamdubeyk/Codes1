/*
Program to print table of any number .
*/

#include<iostream>
using namespace std ;

int main()
{
    double  num , i ;
    cout << "\nEnter number : " ;
    cin >> num ;
    cout << "Table of " << num << endl << "------------------------------------------------\n" ;
    for ( i = 1 ; i <= 10 ; i++)
    {
        cout << num << "*" << i << "=" << num*i << endl ;
    }
    return 0 ;
}
/*
output: -
Enter number : 6
Table of 6
------------------------------------------------
6*1=6
6*2=12
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42
6*8=48
6*9=54
6*10=60
*/