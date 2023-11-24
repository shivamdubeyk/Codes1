#include<iostream>
using namespace std ;

int Fun1(int a, int b) ;

int main ()
{
    int x = 3 ,y = 5 ,z ;

    z = Fun1(x , y) ;
    cout << "\nSum = " << z ;
    return 0 ;
}

int Fun1(int a,int b)
{
    int sum ;
    sum = a + b ;
    return sum ;
}