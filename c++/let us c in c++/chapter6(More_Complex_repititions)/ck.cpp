//24 HOURS OF A DAY WITH SUITABLE SUFFIXES LIKE AM,PM,NOON,MIDNIGHT

#include<iostream>
using namespace std ;

int main()
{
    int hr;

    cout << "\n24 HOURS OF A DAY WITH SUITABLE SUFFIXES LIKE AM,PM,NOON,MIDNIGHT : " ;
    
    for(hr=0;hr<=23;hr++)
    {
        if (hr==0)
        {
            cout << "\n12 MIDNIGHT" ;
            continue;
        }
        if (hr<12)
        {
            cout << "\n"<< hr <<" AM" ;
        }
        if (hr==12)
        {
            cout << "\n12 NOON" ;
        }
        if (hr>12)
        {
            cout << "\n" << hr << " PM" ;
        }
    }
    return 0;
}