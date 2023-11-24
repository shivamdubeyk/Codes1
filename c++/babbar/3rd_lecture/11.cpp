//Program to print sum of numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){
    
    int n; 
    double fahrenheit = 1;
    double celsius ;
    
    cout << "Enter last value of fahrenheit to be printed : " << endl;
    cin >> n;

    while (fahrenheit <= n )
    {   
        celsius = (fahrenheit - 32 )* 5 / 9 ;
        cout << endl << fahrenheit << " fahrenheit = "<< celsius << " celsius";
        fahrenheit ++ ;
    }
    return 0;
} 