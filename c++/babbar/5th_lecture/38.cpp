// 3rd Question on what will be the output. 
// (For loop , break ,continue , bitwise operators)
#include<iostream>
using namespace std ;

int main()
{
    for (int i = 0 ; i <= 15 ; i += 2 )
    {
        cout << i << " " ;
        
        if( i & 1)
            continue ;
        i++ ;
    }
    return 0 ;
}
/*
output :- 
0 3 5 7 9 11 13 15  
*/