// initializing array of structures not at runtime ;

#include<iostream>
using namespace std ;

int main()
{
    struct book
    {
        char book_Name ; double price ; int page_No ;
    } b[3] ;
    
    int dh ,m = 10, n = 100 ;
    char ch = 'A' ;
    for (register int  i = 0 ; i <= 2 ; i++, m++, ch ++ , n++ )
    {
        b[i].book_Name = ch ;
        b[i].price = m ;
        b[i].page_No = n ;
    }

    for (register int  i = 0 ; i <= 2 ; i++ )
    {
        cout << b[i].book_Name << "\t\t" << b[i].price << "\t\t" << b[i].page_No << "\n" ;
    }
}