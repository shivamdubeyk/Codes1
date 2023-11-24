// Steel grade
#include<iostream>
using namespace std;

int main(){

    int hd, ts; //largest, sum ;
    double cc;
    cout << "\nEnter hardness : ";
    cin >> hd ;
    
    cout << "\nEnter carbon content : ";
    cin >> cc ;
    
    cout << "\nEnter tensile strength : ";
    cin >> ts ;

    if ( (hd>50) && (cc<0.7) && (ts>5600) )
    {
        cout << " 10 grade";
    }
    else if ( (hd>50) && (cc<0.7) )
    {
        cout << " 9 grade";
    }
    else if ( (cc<0.7) && (ts>5600) )
    {
        cout << " 8 grade";
    }
    else if ( (hd>50) && (ts>5600) )
    {
        cout << " 7 grade";
    }
    else if ( (hd>50) || (cc<0.7) || (ts>5600) )
    {
        cout << " 6 grade";
    }
    else 
    {
        cout << " 5 grade";
    }

    return 0;
}