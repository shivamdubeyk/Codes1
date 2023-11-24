//Program to check whether the given number is positive or negative.

#include<iostream>
using namespace std;
int main(){
    
    int Num1,Num2;
    
    cout << "Enter first number : " << endl;
    cin >> Num1;
    cout << "Enter second number : " << endl;
    cin >> Num2;

    if (Num1>Num2)
        cout << Num1 << " is greater.";
    else if (Num1<Num2)
        cout << Num2 << " is greater.";
    else 
        cout << "Both " << Num1 << " and " << Num2 << " are equal.";
    
    return 0;
} 