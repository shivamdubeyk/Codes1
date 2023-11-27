//leap year or not.
#include<iostream>
using namespace std;
int main()
{
    int a;

    cout << "\nENTER ANY YEAR : ";
    cin >> a;

    if ((a%400==0)||(a%100==0)&&(a%4==0))
    {
        cout<<a<<" IS A LEAP YEAR !";
    }
    else
    {
        cout << a << " IS A NOT LEAP YEAR !";
    }
    return 0;
}