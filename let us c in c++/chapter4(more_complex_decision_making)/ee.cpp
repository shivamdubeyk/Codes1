/*
rewrite using conditional operator(?). 
*/
#include<iostream>
using namespace std;

int main()
{
    float sal;

    cout << "\nENTER SALARY : " ;
    cin >> sal ;

    (sal>=25000&&sal<=40000)? cout << "\nmanager.":((sal>=15000&&sal<25000)?(cout << "\naccountant."):cout << "\nclerk.");
    return 0;
}