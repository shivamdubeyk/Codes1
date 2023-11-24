//Program to take space,tab and enter as the value of a variable.

#include<iostream>
using namespace std;
int main(){
    
    int a;
    
    cout << "Enter space,tab or enter : " << endl;
    a = cin.get();

    cout << a << " .";
    
    return 0;
} 
/*output for space: 

32 .
ASCII value of space.
*/