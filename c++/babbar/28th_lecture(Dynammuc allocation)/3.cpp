// Program to crash system and fill computer memory

#include<iostream>
using namespace std;
int main()
{
    while (true)
    {
        int *p = new int[50] ;
    }
    return 0 ;
}