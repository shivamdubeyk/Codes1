// Program to use for(; ;)
#include<iostream>
using namespace std ;

int main(){

    int  i = 1, n ;
    cout << "\nEnter n : " ;
    cin >> n ;
    
    for (; ;)
    {
        if ( i <= n )
        {
            cout << i << endl ;
        }
        else
        {
            break ;
        }
        i++ ;
    }
    return 0 ;
}
/*
output :- 
Enter n : 
1
2
3
.
.
n
*/