// Program to add multiple variables and multiple conditions in a for loop.
#include<iostream>
using namespace std ;

int main(){

    int  n ;
    cout << "\nEnter n : " ;
    cin >> n ;
    
    for (int i = 1,b = 1 ; i <= n, b <= 2  ; i++ , b++  )
    // here commas are working like and gate && , We can also use && instead of comma(,) . 
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