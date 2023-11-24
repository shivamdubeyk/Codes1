// Nested structures 
#include<iostream>
using namespace std ;

void structfun1 ( char * ,int ) ;
void structfun2 (struct classs) ;
void structfun3 (struct classs * ) ;

struct classs 
{
    char class_Name[5] ;
    int Number_of_students ; 
} a ;

int main()
{
    cout << endl << "Enter Class name = " ;
    cin >> a.class_Name ;
    cout << endl << "Enter number of student name = " ;
    cin >> a.Number_of_students ;
    structfun1 (a.class_Name , a.Number_of_students ) ;
    structfun2 (a) ;
    structfun3 (&a) ;
    return 0 ;
}
void structfun1 (char *s , int df ) 
{
    cout << "sf " << s << "   sdad    " << df  << endl ;  
}
void structfun2 (struct classs a) 
{
    cout << "sf   " << a.class_Name << "      sdAd    " << a.Number_of_students << endl ; 
}
void structfun3 (struct classs *pa)
{
    cout << "sf   " << pa->class_Name << "      sdAd    " << pa->Number_of_students << endl ; 
}