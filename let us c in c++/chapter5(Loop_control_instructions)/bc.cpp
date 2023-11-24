// One number power to the another number.

#include<iostream>
using namespace std;
int main()
{
    int i = 1, Base, Expo, temp ;

    cout << "\nEnter Base Number : ";
    cin >> Base ;           // 3
    temp = Base ;
    
    cout << "\nEnter Exponent Number : ";
    cin >> Expo ;           //3

    while (i<Expo)          //1<3
    {   
        temp = Base * temp ;    //base=3   temp=9
        i++ ; 
    }
   cout << "Answer = " << temp ;
   return 0;
}