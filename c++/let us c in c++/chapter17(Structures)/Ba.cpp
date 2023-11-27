/*Create a structure to specify data on students given below: 
Roll number, Name, Department, Course, Year of joining 
Assume that there are not more than 450 students in the 
collage. 
(a) Write a function to print names of all students who joined 
in a particular year. 
(b) Write a function to print the data of a student whose roll 
number is given.*/
#include<iostream>
using namespace std ;

struct student
{
    unsigned int R_no ;
    unsigned char Name[10] ;
    unsigned char dept_Name[10] ;
    unsigned char course[10] ;
    unsigned short int year_of_joining ;
};
struct student s[450] ;

int fun1() ;
int fun2() ;

int main()
{
    for (register int  i = 0 ; i <= 449 ; i++)
    {
        cout << "\nEnter roll number of " << i + 1 << " student : " ;
        cin >> s[i].R_no ;
        cout << "\nEnter Name of " << i + 1 << " student : "  ;
        cin >> s[i].Name ;
        cout << "\nEnter Department Name of " << i + 1 << " student : "  ;
        cin >> s[i].dept_Name ;
        cout << "\nEnter course of " << i + 1 << " student : "  ;
        cin >> s[i].course ;
        cout << "\nEnter year of joining of " << i + 1 << " student : " ;
        cin >> s[i].year_of_joining ;
    }
    fun1 () ;
    fun2 () ;
}

// Function to print name of students of a specific year .
int fun1() 
{
    short int year ;
    cout << "\nEnter year to print name of students : " ;
    cin >> year ;
    cout << "\nList of students of " << year << " is -------- " ;   

    for (register int i = 0 ; i <= 449 ; i++)
    {
        if (s[i].year_of_joining == year)
        {
            cout << "\nName = " << s[i].Name ;
        }
        else
        {
            continue ; 
        }
    }
    return 0 ;
}

// Function to print name of students of a specific year .
int fun2() 
{
    short int r_no ;
    cout << "\nEnter Roll Number to print name of students : " ;
    cin >> r_no ;
    cout << "\nList of students of roll no. " << r_no << " is -------- " ;   

    for (register int i = 0 ; i <= 449 ; i++)
    {
        if (s[i].R_no == r_no)
        {
            cout << "\nName = " << s[i].Name ;
            cout << "\nDepartment = " << s[i].dept_Name ;
            cout << "\ncourse = " << s[i].course ;
            cout << "\nYear of joining = " << s[i].year_of_joining ;
        }
        else
        {
            continue ; 
        }
    }
    return 0 ;
}