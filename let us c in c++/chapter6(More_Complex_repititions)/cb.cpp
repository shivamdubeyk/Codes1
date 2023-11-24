//Program to print all possible combinations of 1,2 and 3  
#include<iostream>
using namespace std ;

int main()
{
    int i , j , k ;

    cout << "\nList of all possible combinations of 1,2 and 3  : " << endl << "----------------------------------------------" << endl;

    for ( int i = 1 ; i <= 3 ; i++)
    {
        for (int  j = 1 ; j <= 3 ; j++)
        {
            for ( k = 1 ; k <= 3 ; k++)
            {
                if ( i != j && j != k && k != i )
                cout << i << j << k << endl ;
            }
        }
    }
    return 0 ;
}
/*
output: -
List of all possible combinations of 1,2 and 3  : 
----------------------------------------------
123
132
213
231
312
321*/