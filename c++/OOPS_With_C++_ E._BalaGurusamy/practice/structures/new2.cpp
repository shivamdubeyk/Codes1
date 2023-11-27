// Array of structures

#include<iostream>
using namespace std ;

int main()
{
    struct book
    {
        char book_Name ; double price ; int page_No ;
    } b[3] ;
    
    int dh ;
    for (register int  i = 0 ; i <= 2 ; i++ )
    {
        cout << " \nEnter book name , book price , book page number : " ;
        cin >> b[i].book_Name >> b[i].price >> b[i].page_No ;
        while ((dh = getchar()) != '\n' )
        {
            ;
        }
    }

     for (register int  i = 0 ; i <= 2 ; i++ )
    {
        cout << b[i].book_Name << "\t\t" << b[i].price << "\t\t" << b[i].page_No << "\n" ;
    }
}