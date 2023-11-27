// Identify the errors 

#include<iostream>
int main()
{
    int num[]={1,2,3,4,5,6};
    num[1]==[1]num ? cout<<"Success" : cout<<"Error";
    return 1 ;
}
/*
Ans: num [1] = [1] num?. You should write index number after array name but here index 
number is mention before array name in [1] num
So expression syntax error will be shown.

Correction : num[1] = num[1]? is the correct format
*/