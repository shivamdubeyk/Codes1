/*
Write a program that compares two given dates. To store date 
use structure say date that contains three members namely 
date, month and year. If the dates are equal then display 
message as "Equal" otherwise "Unequal". 
*/

#include<iostream>
using namespace std ;

struct date
{
    unsigned int day ;
    unsigned int month ;
    unsigned int year ; 
} ;

struct date d1 , d2 ;

int fun1(struct date, struct date ) ;

int main()
{
    int ret ; 
    cout << "\nEnter day of first date : " ;
    cin >> d1.day ;
    cout << "Enter month of first month : " ;
    cin >> d1.month ;
    cout << "Enter year of first year : " ;
    cin >> d1.year ;
    cout << "\nEnter day of second date : " ;
    cin >> d2.day ;
    cout << "Enter month of second month : " ;
    cin >> d2.month ;
    cout << "Enter year of second year : " ;
    cin >> d2.year ;

    ret = fun1(d1 ,d2);
}

// Function to compare the dates.

int fun1(struct date dat1 , struct date dat2 ) 
{
    if ( (dat1.year == dat2.year) && (dat1.month == dat2.month) && (dat1.day == dat2.day) )
    {
        cout << " Both dates are equal :  " << endl ;
        cout << dat1.day << "/" << dat1.month << "/" << dat1.year << " = " ;
        cout << dat2.day << "/" << dat2.month << "/" << dat2.year << endl ;
    }
    else
    {
        cout << " Both dates are unequal :  " ;
    }
    
    return 0 ;
}

