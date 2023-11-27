/*An automobile company has serial number for engine parts 
starting from AA0 to FF9. The other characteristics of parts to 
be specified in a structure are: Year of manufacture, material 
and quantity manufactured. 
(a) Specify a structure to store information corresponding to 
a part. 
(b) Write a program to retrieve information on parts with 
serial numbers between BB1 and CC6. */

/* incomplete
    
*/

#include<iostream>
using namespace std ;

struct srno
{
    char ch1 ;
    char ch2 ;
    int num1 ;    
};
struct srno sr ;

struct str
{
    struct srno sr;
    int yof ;
    char material[10] ;
    int quantity ;
};
struct str pro[6][6][10] ;

// int fun1() ;
// int fun2(int x) ;

int main()
{
    char i = 'A', j = 'A', k = 0 ;
    for ( i = 'A' ; i <= 'F' ; i++ )
    {
        pro.sr.ch1 = i ;
        for (j = 'A' ; j <= 'F' ; j++ )
        {
            pro.sr.ch2 = j ;
            for (k = 0 ; k <= 9 ; k++ )
            {
                pro.sr.num1 = k ;
                cout << " \nEnter Year of manufacturing : " ;
                cin >> pro.yof[i][j][k] ;
                cout << pro.sr.ch1 << pro.sr.ch2 << pro.sr.num1 << endl ;
            }
            cout << endl ;
        }
        cout << "--------------------------------------------------------\n" ;
    }
    // fun1 () ;
}

// Function to print name and account number of account holders with balance below 100
// int fun1() 
// {
//     cout << "\nList of names of account holder with balance below 100  is -------- " ;   

//     for (register int i = 3 ; i <= 4 ; i++)
//     {
//         if (d[i].balance < 100)
//         {
//             cout << "\n\n\nName = " << d[i].Name ;
//             cout << "\nAccount Number = " << d[i].acc_no ;
//         }
//         else
//         {
//             continue ; 
//         }
//     }
//     return 0 ;
// }

// Function to print name of data of a specific year .
// int fun2( int x) 
// {
//     struct form
//     {
//         long int acc_no1 ; double amount ; int code ;
//     } f ;

//     cout << "\nEnter account Number : " ;
//     cin >> f.acc_no1 ;
//     cout << "Enter amount : " ;
//     cin >> f.amount ;
//     cout << "Enter Code 1 for deposit and 0 for withdrawl : " ;
//     cin >> f.code ;

//     if (f.code == 1)
//     {
//         cout << "\nNew balance  = " << d[x].balance << " + " << f.amount << " = " ;
//         d[x].balance += f.amount ;
//         cout << d[x].balance ;
//     }
//     else if (f.code == 0)
//     {
//         if (d[x].balance - f.amount < 100 )
//         {
//             cout << " insufficient balance ("<<d[x].balance <<") for withdrawal." ;
//         }
//     }
//     else
//     {
//         cout << "\nWrong code entered " ;
//     }
    
//     return 0 ;
// }