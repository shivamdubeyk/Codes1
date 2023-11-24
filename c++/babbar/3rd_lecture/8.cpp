//Program to print numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    
    int n, i = 1;
    
    cout << "Enter last number to be printed : " << endl;
    cin >> n;

    while (i <= n )
    {   
        cout << i << endl ;
        i++;
    }
    return 0;
} 
