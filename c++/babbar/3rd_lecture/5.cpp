//Program to check whether the given number is positive or negative or zero. using if-elseif-else.

#include<iostream>
using namespace std;
int main(){
    
    int Num;

    cout << "Enter any number : " << endl;
    cin >> Num;

    if (Num>0)
        cout << Num << " is positive.";
    else if (Num<0)
        cout << Num << " is negative.";
    else
        cout << Num << " is neutral.";
    return 0;
} 