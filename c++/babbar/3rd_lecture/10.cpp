//Program to print sum of even numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    
    int n, i = 1, sum = 0, even ;
    
    cout << "Enter last number to be printed : " << endl;
    cin >> n;

    while (i <= n )
    {   
        if(i % 2 == 0)
        {
            cout << sum << "+" << i << endl ;
            sum = sum + i;
            i++;
        }
        else
            i++;
    }
    cout << "\nSum is  "<< sum;
    return 0;
} 