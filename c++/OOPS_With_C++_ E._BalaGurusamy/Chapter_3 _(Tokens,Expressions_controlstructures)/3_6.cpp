// Programming exercise 
/*
3.6: A cricket has the following table of batting figure for a series of test matches:
Player’s name       Run         Innings         Time not out
    Sachin          8430          230               18
    Saurav          4200          130               9
    Rahul           3350          105               11
      .               .            .                 .
      .               .            .                 .

Write a program to read the figures set out in the above forms, to calculate the batting averages 
and to print out the complete table including the averages.\
*/

#include<iostream>
#include<cstring>
#include<iomanip>           //for using Setw

using namespace std ;

struct player
{
    char name[10] ;
    int runs ;
    int innings ;
    int TNO ;
    double avg ;
};

struct player p[5] ;

int main()
{
    int i ;

    for ( i = 0 ; i <= 4 ; i++)
    {
        cout << "\nEnter player's name : " ;
        cin >> p[i].name ;
        
        cout << "\nEnter Runs scored by " << p[i].name 
             << " : " ;
        cin >> p[i].runs ;
        
        cout << "\nEnter number of innings played by " << p[i].name << " : " ;
        cin >> p[i].innings ;
        
        cout << "\nEnter number of times " << p[i].name << " was not out : " ;
        cin >> p[i].TNO ;

        p[i].avg = p[i].runs / p[i].innings ;
    }
    
    cout << "\nPlayer's name " <<"      Runs" << "      Innings" << "       Times Not Out" << "        Average runs per inning \n" ;

    for ( i = 0 ; i <= 4 ; i++)
    {
        cout<< setw(8) << p[i].name  
            << setw(15) << p[i].runs  
            << setw(11) << p[i].innings  
            << setw(18) << p[i].TNO  
            << setw(25)<< p[i].avg << endl ;
    }

    
    return 0;
}
/*
OUTPUT:-

Enter player's name : Sachin

Enter Runs scored by Sachin : 8430

Enter number of innings played by Sachin : 230

Enter number of times Sachin was not out : 18

Enter player's name : Saurav

Enter Runs scored by Saurav : 4200

Enter number of innings played by Saurav : 130

Enter number of times Saurav was not out : 9

Enter player's name : Rahul

Enter Runs scored by Rahul : 3350

Enter number of innings played by Rahul : 105

Enter number of times Rahul was not out : 11

Enter player's name : shivam

Enter Runs scored by shivam : 10000

Enter number of innings played by shivam : 100

Enter number of times shivam was not out : 90

Enter player's name : nishita

Enter Runs scored by nishita : 10 

Enter number of innings played by nishita : 1000

Enter number of times nishita was not out : 0

Player's name       Runs      Innings       Times Not Out        Average runs per inning
  Sachin           8430        230                18                       36
  Saurav           4200        130                 9                       32
   Rahul           3350        105                11                       31
  shivam          10000        100                90                      100
 nishita             10       1000                 0                        0
 
 */