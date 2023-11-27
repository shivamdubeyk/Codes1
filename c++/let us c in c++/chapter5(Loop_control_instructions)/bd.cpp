//ASCII value            ASCII character.

#include<iostream>
using namespace std;
int main()
{
    int i = 0 ;
    char ch = 0 ;

    cout << "\nASCII value            ASCII character";
    while (i<=255)
    {   
        cout << endl <<"    " << i << "                         " << ch ;
        i++ ;
        ch++ ;
    }
    return 0;
}