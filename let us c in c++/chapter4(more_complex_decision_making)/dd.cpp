/*whether the triangle is isosceles,
equilateral,scalene or a right angle triangle.*/

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
    
    if (((s1==s2)&&(s1!=s3))||((s2==s3)&&(s2!=s1))||((s1==s3)&&(s1!=s2)))
    {
        cout << "\nTriangle is isosceles.";
    }
    else if (((s1==s2)&&(s2==s3)) || ((s1==s3)&&(s2==s3)) || ((s2==s3)&&(s1==s3)))
    {
        cout << "\nTriangle is equilateral.";
    }
    else
        cout << "\nTriangle is scalene.";

    if (((s1*s1==s2*s2+s3*s3)) || ((s2*s2==s1*s1+s3*s3)) || ((s3*s3==s2*s2+s1*s1)))
    {
        cout << "\nTriangle is right angle triangle.";
    }
    else
        cout << "\nTriangle is not a right angle triangle.";
    return 0;
}