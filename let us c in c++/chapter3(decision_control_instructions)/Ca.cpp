//Rev of a five digit number.
#include<iostream>
using namespace std;
int main(){
    int CP,SP;

    cout << endl << "Enter cost price of an item : " ;
    cin >> CP ; 
    cout << endl << "Enter selling price of an item : " ;
    cin >> SP ;
    
    if (CP>SP)
        cout << "\nYou incurred loss of Rs.: " << CP-SP ;
    else if(CP<SP) 
        cout << "\nYou made profit of Rs. : " << SP-CP ;
    else
        cout << "\nNeither loss nor profit" ;
    return 0; 
}