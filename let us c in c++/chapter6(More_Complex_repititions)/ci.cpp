/*
Program to calculate population rate decreasing 10 %  
*/

#include<iostream>
using namespace std ;

int main()
{
    int i, pop = 100000 ;  

    for ( i = 1 ; i <= 10 ; i++ )
    {
        cout << "population =  " << pop << endl ;
        pop = pop - pop / 10 ;
        
    }
            
    return 0 ;
}
/*
outut:-
Enter x : 7
sum = 8.40882
*/