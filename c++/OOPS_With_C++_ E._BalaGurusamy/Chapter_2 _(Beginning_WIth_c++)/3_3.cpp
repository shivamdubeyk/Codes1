// Programming exercise 
// Attempt the following.
// Write a program that inputs a character from a keyboard and
// print its corresponding ASCII value .

#include<iostream>
using namespace std ;
int main ()
{
    char  Ch ;
    cout << "Enter Character : " ;
    cin >> Ch ;

    int ASCII = Ch; 
    cout << "ASCII value of " << Ch << " is "  <<  ASCII ;
    return 0 ; 
}
/*
Output :-
Enter Character : a
ASCII value of a is 97
*/
/*
Note :- initialising ASCII before getting value of ch will initialize ASCII as 0. 
That is : - The below program will give all values 0 .

#include<iostream>
using namespace std ;
int main ()
{
    char  Ch ;
    int ASCII = Ch; 
    cout << "Enter Character : " ;
    cin >> Ch ;

    cout << ASCII ;
    return 0 ; 
}
/*
Output :- 
Enter Character : a
0
*/