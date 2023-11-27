//Calculate Overtime pay

#include<iostream>
using namespace std;
int main()
{
    int i = 1, worked_hrs, overtime_salary, overtime_hrs = 0 ;

    while (i<=10)
    {   
        cout << "\nENTER Worked hours : ";
        cin >> worked_hrs ;
        
        if (worked_hrs>40)
        {
            overtime_hrs = worked_hrs - 40 ;
            overtime_salary = overtime_hrs * 12 ;
            cout << "\nOvertime Hrs. = " << overtime_hrs << "\nOvertime salary = " << overtime_salary;
        }
        else
            cout << "\nNoo overtime! ";
        i++ ;
    }
   
    return 0;
}