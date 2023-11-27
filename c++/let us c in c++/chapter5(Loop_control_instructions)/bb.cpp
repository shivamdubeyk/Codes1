// //Factorial of a number.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i = 1, fact = 1, Num ;

//     cout << "\nEnter Number : ";
//     cin >>  Num ;
//     while (i<=Num)
//     {   
//         if (i==Num)
//         {
//             cout << i ;
//             fact = fact * i ;
//             i++ ;
//             continue ; 
//         }
//         else 
//         {   
//             cout << i <<"*" ;
//             fact = fact * i ;
//             i++ ;
//         }
//     }
//    cout << "=" << fact ;
//     return 0;
// }
//Factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    int i = 1, fact = 1, Num ;

    cout << "\nEnter Number : ";
    cin >>  Num ;
    while (i<=Num)
    {   
        fact = fact * i ;
        i++ ;
    }
    
    cout << "=" << fact ;
    return 0;
}