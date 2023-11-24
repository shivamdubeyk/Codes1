// program to print numbers from 1 to n 
#include<iostream>
using namespace std ;

int main(){

    int  n ;
    cout << "\nEnter n : " ;
    cin >> n ;
    
    for (int i = 1 ; i <= n ; i++ )
    {
        cout << i << endl ;
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