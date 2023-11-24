// dry run exercises
#include<iostream>
using namespace std ;

int main ()
{
    int i = 5 ;
    while (i)
    {
        switch (i)
        {
        default:
        case 4 :
        case 5 :
            break;
        case 1 : 
            continue ;
        case 2 : 
        case 3 :
        break ;
        }
        cout << "\n" << i ;
        i-- ;
    }
    return 1 ;
}
/*

5
4
3
2
...(program won't terminate and value will not decrease from 2)
*/