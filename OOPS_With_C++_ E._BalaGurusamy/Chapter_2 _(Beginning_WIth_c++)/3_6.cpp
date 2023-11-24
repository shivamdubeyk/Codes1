//  Programming exercise 
//  Attempt the following.
/*  Write a C++ program that will ask for a temperature in Fahrenheit and display it in
    Celsius 
    Redo Exercise 2.5 using a class called temp and member functions.
*/
#include<iostream>
using namespace std ;

class temp
{
    double f, theta ;
    public :
        void getdata ( void ) ;
        void convert ( void ) ; 
} ;

void temp :: getdata ( void )
{
    cout << "Enter value in Fahrenheit : " ;
    cin >> f ;
}

void temp :: convert ( void )
{
    theta = ( ( f - 32 ) / 9) * 5 ;
    cout <<"Value in celsius : " << theta ;

}

int main()
{
    temp t ;
    t.getdata () ;
    t.convert () ;
}
/*
output
Enter the temperature in Fahrenheit scale : 105
Temperature in Celsius = 40.555557
*/