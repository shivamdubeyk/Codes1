// dry run exercises

#include<iostream>
using namespace std ;

int main ()
{
    float a = 12.2 ;
    if (a == 12.2)
    {
        cout << "equal" ;
    }
    else cout << "not equal" ;
    return 1 ;
}
//Output :- not equal 

/*
Reason 
we can not compare two floating point numbers like this */