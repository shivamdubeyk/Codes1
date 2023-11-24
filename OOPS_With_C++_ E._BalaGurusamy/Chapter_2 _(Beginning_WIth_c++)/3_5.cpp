//  Programming exercise 
//  Attempt the following.
/*  Write a C++ program that will ask for a temperature in Fahrenheit and display it in
    Celsius 
*/
#include<iostream>
using namespace std ;

int main()
{
    double f, theta ;
    cout << " Enter the temperature in Fahrenheit scale : " ;
    cin >> f ;
    theta = ( (f - 32 ) / 9) * 5 ;
    cout << " Temperature in Celsius = "<< theta << endl ;
    return 0 ;
}
/*
output
Enter the temperature in Fahrenheit scale : 105
Temperature in Celsius = 40.555557
*/