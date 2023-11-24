//program for relational operators.

#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    
    bool f = (a==b);
    cout<<"answer(a(2)==b(3)) : "<<f<<endl;

    bool s = (a!=b);
    cout<<"answer(a(2)!=b(3)) : "<<s<<endl;

    bool t = (a>b);
    cout<<"answer(a(2)>b(3)) : "<<t<<endl;

    
    bool fo = (a<b);
    cout<<"answer(a(2)>b(3)) : "<<fo<<endl;

    
    bool fi = (a>=b);
    cout<<"answer(a(2)>=b(3)) : "<<fi<<endl;    

    
    bool si = (a<=b);
    cout<<"answer(a(2)<=b(3)) : "<<si<<endl;
}
