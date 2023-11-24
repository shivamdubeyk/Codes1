// Program to understand use of continue statement.
// Program to print only "Hi" and "Hey" in loop among "Hi" ,"Hey" and "Don't Reply" using continue statement.  
#include<iostream>
using namespace std ;

int main()
{
    for (int i = 1 ; i <= 5 ; i++ )
    {
        cout << "Hi" << endl ;
        cout << "Hey" << endl ;
        continue ;
        cout << "Don't Reply" << endl ;
    }
    return 0 ;
}
/*
output :- 
Hi
Hey
Hi
Hey
Hi
Hey
Hi
Hey
Hi
Hey
*/