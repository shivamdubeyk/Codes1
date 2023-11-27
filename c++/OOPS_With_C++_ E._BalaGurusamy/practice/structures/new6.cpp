// Nested structures 
#include<iostream>
using namespace std ;

int main()
{
    struct classs 
    {
        char class_Name[5] ;
        int Number_of_students ; 
    } a ;
    
    struct department
    {
        char department_Name[10] ;
        struct classs a ;
    } b ;

    cout << endl << "Enter Department name = " ;
    cin >> b.department_Name ;
    cout << endl << "Enter Class name = " ;
    cin >> b.a.class_Name ;
    cout << endl << "Enter number of student name = " ;
    cin >> b.a.Number_of_students ;

    cout << endl << "Enter Department name = " << b.department_Name ;
    cout << endl << "Enter Class name = " << b.a.class_Name ;
    cout << endl << "Enter number of student name = " << b.a.Number_of_students ;
    return 0 ;
}