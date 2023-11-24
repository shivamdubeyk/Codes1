//Program to print sum of numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    
    int n, i = 1, sum = 0 ;
    
    cout << "Enter last number to be printed : " << endl;
    cin >> n;

    while (i <= n )
    {   
        cout << sum << "+" << i << endl ;
        sum = sum + i;
        i++;
    }
    cout << "\nSum is  "<< sum;
    return 0;
} 
