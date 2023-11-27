//CHECK A TRIANGLE IS VALID OR NOT.
#include<iostream>
using namespace std;

int main(){

    int s1, s2, s3; //largest, sum ;

    cout << "\nEnter first side of triangle : ";
    cin >> s1 ;
    
    cout << "\nEnter second side of triangle : ";
    cin >> s2 ;
    
    cout << "\nEnter third side of triangle : ";
    cin >> s3 ;


    if ( ((s1>s2) && (s1>s3) && (s2+s3>s1) )|| ((s2>s1) && (s2>s3) && (s1+s3>s2))||((s3>s1) && (s3>s2) && (s1+s2>s3)))
        cout << " triangle is valid.";
    else
        cout << " triangle is not valid.";

    return 0;        
    
}
