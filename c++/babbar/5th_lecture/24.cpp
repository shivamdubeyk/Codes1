// practice questions what is the output 
#include<iostream>
using namespace std ;

int main(){

    int  a = 1, b = 2 ;

    if (a-- > 0 && ++b > 2 )
        cout << "Stage1 - Inside If " ;
    else 
        cout << "Stage2 - Inside else " ;
    cout << a << " " << b << endl ;
    return 0 ;
}
/*
output :- 
Stage1 - Inside If 0 3
*/