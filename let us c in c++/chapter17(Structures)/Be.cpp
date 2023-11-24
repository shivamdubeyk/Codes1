/*
    There is a structure called employee that holds information 
like employee code, name, date of joining. Write a program to 
create an array of the structure and enter some data into it. 
Then ask the user to enter current date. Display the names of 
those employees whose tenure is 3 or more than 3 years 
according to the given current date. 
*/

#include<iostream>
using namespace std ;

struct employee
{
    unsigned int employee_code ;
    unsigned char Name[10] ;
    unsigned int Jday ;
    unsigned int Jmonth ;
    unsigned int Jyear ;
};
struct employee d[10] ;

int main()
{
    int cdate , cmonth , cyear ;
    
    cout << "\nEnter current date : " ;
    cin >> cdate ;
    cout << "\nEnter current month : " ;
    cin >> cmonth ;
    cout << "\nEnter current year : " ;
    cin >> cyear ;

    for (register int  i = 0 ; i <= 3 ; i++)
    {
        cout << "\nEnter employee code of " << i + 1 << " employee :  " ;
        cin >> d[i].employee_code ;
        cout << "\nEnter Name of " << i + 1 << " employee : "  ;
        cin >> d[i].Name ;
        cout << "\nEnter date of joining of " << i + 1 << " employee : " ;
        cin >> d[i].Jday ;
        cout << "\nEnter month of joining of " << i + 1 << " employee : " ;
        cin >> d[i].Jmonth ;
        cout << "\nEnter year of joining of " << i + 1 << " employee : " ;
        cin >> d[i].Jyear ;
    }
    
    cout << "List of name of the employees \n----------------------------\n" ;

    for ( register int  i = 0 ; i <= 3 ; i++ )
    {

        if( d[i].Jyear < (cyear - 3))
        {
            cout << d[i].Name << endl ;
        }    
        else if( d[i].Jyear == cyear - 3 )
        {
            if ( d[i].Jmonth < cmonth )
            {
                cout << d[i].Name << endl ;
            }
            else if ( d[i].Jmonth == cmonth )
            {
                if ( d[i].Jday <= cdate )
                {
                    cout << d[i].Name << endl ;
                }
                else
                {
                    continue ;
                }
            }
            else
            {
                continue ;
            }
        }
        else
        {
            continue ;
        }
    }
    return 0 ;
}