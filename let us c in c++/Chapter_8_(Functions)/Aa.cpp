// What will be the output of the following program

#include<iostream>
using namespace std ;

void display () ;

int main ()
{
    cout << "Learn C \n " ; 
    display () ;
    return 0 ;
}

void display ()
{
    cout << "Followed by C++ ,C# and Java!\n " ;
    main () ;
}

/*
output:- infinite loop 
Followed by C++ ,C# and Java!
 Learn C 
Followed by C++ ,C# and Java!
 Learn C
Followed by C++ ,C# and Java!
 Learn C
Followed by C++ ,C# and Java!
 Learn C
Followed by C++ ,C# and Java!
 Learn C
Followed by C++ ,C# and Java!
 Learn C
Followed by C++ ,C# and Java!
 Learn C
 
*/