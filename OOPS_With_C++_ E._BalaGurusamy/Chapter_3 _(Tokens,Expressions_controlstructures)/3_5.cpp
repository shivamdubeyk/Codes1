// Programming exercise 
/*
3.5: An election is contested by five candidates. The candidates are numbered 1 to 5 and the 
voting is done by marking the candidate number on the ballot paper. Write a program to 
read the ballots and count the vote cast for each candidate using an array variable count. In 
case, a number read is outside the range 1 to 5, the ballot should be considered as a “spoilt 
ballot” and the program should also count the numbers of “spoilt ballots”.
*/

#include<iostream>

using namespace std ;

int main()
{
    int a[10] ;
    int first = 0, second = 0 , third = 0 , fourth = 0, fifth = 0 , sploit = 0 ;

    enum vote 
    {
        one = 1,
        two,
        three,
        four, 
        five
    } ;


    for (int i = 0 ; i < 10 ; i++)
    {
        cout << "\nVote (Enter number from 1 to 5) : " ;
        cin >> a[i] ;

        switch (a[i])
        {
        case one :
            first++ ;
            break;

        case two :
            second++ ;
            break;
        
        case three :
            third++ ;
            break ;
        
        case four :
            fourth++ ;
            break ;

        case five :
            fifth++ ;
            break ;
        
        default:
            cout << "Invalid number entered! out of the range 1 to 5\n" ;
            sploit++ ;
            continue ;
        }
    }
    
    cout << "\nNo. of votes of first candidate : " << first 
         << "\nNo. of votes of second candidate : " << second
         << "\nNo. of votes of third candidate : " << third
         << "\nNo. of votes of fourth candidate : " << fourth
         << "\nNo. of votes of fifth candidate : " << fifth
         << "\nNo. of sploit votes : " << sploit ;

    return 0;
}
/*
OUTPUT :-

Vote (Enter number from 1 to 5) : 1

Vote (Enter number from 1 to 5) : 23
Invalid number entered! out of the range 1 to 5

Vote (Enter number from 1 to 5) : 1

Vote (Enter number from 1 to 5) : 2

Vote (Enter number from 1 to 5) : 3

Vote (Enter number from 1 to 5) : 6
Invalid number entered! out of the range 1 to 5

Vote (Enter number from 1 to 5) : 1

Vote (Enter number from 1 to 5) : 2

Vote (Enter number from 1 to 5) : 3

Vote (Enter number from 1 to 5) : 4

No. of votes of first candidate : 3
No. of votes of second candidate : 2
No. of votes of third candidate : 2
No. of votes of fourth candidate : 1
No. of votes of fifth candidate : 0
No. of sploit votes : 2

*/