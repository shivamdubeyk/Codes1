#include<stdio.h>
int main(){

    int i = 1, j, n ;

    printf ("\nEnter number of rows : " ;
    cin >> n ;

    while ( i <= n )
    {
        j = n ;
        while (j >= 1)
        {
            cout << j <<" " ;
            j-- ;
        }
        i++ ;
        cout << endl ;
    }
    return 0 ;
}

// int fun2()
// {
//     c-- ;
//     cout << "\nDecremented value :  " << c  ;
//     return 0 ;
// }