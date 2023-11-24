//code for sizeof int,char,bool,float,double;
#include<iostream>
using namespace std;
int main()
{
    int a = 123;
    cout<< a << endl;
    char b ='v';
    cout<< b << endl;
    bool bl= true;
    cout<< bl << endl;
    float f = 1.2;
    cout<< f <<endl;
    double d = 1.23;
    cout<< d << endl;

    int sizei=sizeof(a);
    int sizec=sizeof(b);
    int sizebl=sizeof(bl);
    int sizef=sizeof(f);
    int sized=sizeof(d);
    
    cout<< "Size of a is ." << sizei <<endl;
    cout<< "Size of b is ." << sizec <<endl;
    cout<< "Size of bl is ." << sizebl <<endl;
    cout<< "Size of f is ." << sizef <<endl;
    cout<< "Size of d is ." << sized <<endl;

}