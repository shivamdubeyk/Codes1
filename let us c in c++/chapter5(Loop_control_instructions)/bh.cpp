//OCTAL EQUIVALENT(copied from solutions).
#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    int num1,num2,rem,oct,p;

    cout << "\nEnter any number : " ;
    cin >> num1;

    num2=num1;
    p=oct=0;
    
    while (num1>0)
    {
        rem=num1%8;
        num1=num1/8;
        oct=oct+rem*pow(10,p);		
        p++;
    }
    cout << "The octal equivalent of "<<num2 << " is "<< oct ;
    return 0;
}