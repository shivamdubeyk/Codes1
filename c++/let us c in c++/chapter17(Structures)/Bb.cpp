/*Create a structure to specify data of customers in a bank. The 
data to be stored is: Account number, Name, Balance in 
account. Assume maximum of 200 customers in the bank. 

(a) Write a function to print the Account number and name 
of each customer with balance below Rs. 100. 

(b) If a customer request for withdrawal or deposit, it is 
given in the form: 
    Acct. no, amount, code (1 for deposit, 0 for withdrawal) 

Write a program to give a message, “The balance is 
insufficient for the specified withdrawal”. */

#include<iostream>
using namespace std ;

struct data
{
    unsigned int acc_no ;
    unsigned char Name[10] ;
    long double balance ;
};
struct data d[450] ;

int fun1() ;
int fun2(int x) ;

int main()
{
    char ch = 'n' ;
    for (register int  i = 3 ; i <= 4 ; i++)
    {
        cout << "\nEnter Account number of " << i + 1 << " person : ";
        cin >> d[i].acc_no ;
        cout << "\nEnter Name of " << i + 1 << " person : "  ;
        cin >> d[i].Name ;
        cout << "\nEnter balance of " << i + 1 << " person : " ;
        cin >> d[i].balance ;

        cout << "do you want to deposit aur withdraw : \n" ;
        fflush (stdin) ;
        cout << "If yes then enter 'Y' or 'y' and for no enter 'N' or 'n' : " ;
        cin >> ch ;
        if (ch == 'Y' || ch ==  'y' )
        {
            fun2 (i) ;
        }
        else
        {
            cout << "You have entered 'n' or any other character ! " ;
        }
        
    }
    fun1 () ;
}

// Function to print name and account number of account holders with balance below 100
int fun1() 
{
    cout << "\nList of names of account holder with balance below 100  is -------- " ;   

    for (register int i = 3 ; i <= 4 ; i++)
    {
        if (d[i].balance < 100)
        {
            cout << "\n\n\nName = " << d[i].Name ;
            cout << "\nAccount Number = " << d[i].acc_no ;
        }
        else
        {
            continue ; 
        }
    }
    return 0 ;
}

// Function to print name of data of a specific year .
int fun2( int x) 
{
    struct form
    {
        long int acc_no1 ; double amount ; int code ;
    } f ;

    cout << "\nEnter account Number : " ;
    cin >> f.acc_no1 ;
    cout << "Enter amount : " ;
    cin >> f.amount ;
    cout << "Enter Code 1 for deposit and 0 for withdrawl : " ;
    cin >> f.code ;

    if (f.code == 1)
    {
        cout << "\nNew balance  = " << d[x].balance << " + " << f.amount << " = " ;
        d[x].balance += f.amount ;
        cout << d[x].balance ;
    }
    else if (f.code == 0)
    {
        if (d[x].balance - f.amount < 100 )
        {
            cout << " insufficient balance ("<<d[x].balance <<") for withdrawal." ;
        }
    }
    else
    {
        cout << "\nWrong code entered " ;
    }
    
    return 0 ;
}