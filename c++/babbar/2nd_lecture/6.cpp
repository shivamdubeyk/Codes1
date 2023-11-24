// divide operator(/) operator.
#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    float c=4.6,d=5;
    double e=6.9,f=7;

    cout<<"int/int=int always "<<endl;
    cout<<"Ex. a(2)(int)/b(3)(int) = "<<a/b<<"(int)"<<endl;
    cout<<"float/int=float always "<<endl;
    cout<<"Ex. c(4.6)(float)/b(3)(int) = "<<c/b<<"(float)"<<endl;
    cout<<"double/int=double always "<<endl;
    cout<<"Ex. e(6.9)(int)/b(3)(int) = "<<e/b<<"(double)"<<endl<<endl;
    
    cout<<"direct division without storing : "<<'\n';
    cout<<"2.0/5 = "<<2.0/5<<endl;
}
