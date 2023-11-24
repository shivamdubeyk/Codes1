// copying elements of structures
#include<iostream>
#include<cstring>
using namespace std ;

int main()
{
    struct book
    {
        char book_Name[1] ; double price ; int page_No ;
    };
    struct book b1 = {'s', 9032.3 ,7883 } ;
    struct book  b2 , b3 ;
    //Piece meal copying (copying some elements )
    strcpy ( b2.book_Name,b1.book_Name ); //Here b2.book_Name = b1.book_Name is not allowed 
    b2.price = b1.price ;
    b2.page_No = b1.page_No ;

    //Copy all elements at one go

    b3 = b2 ;

    cout << "Book Name      price       page no." << endl  ;
    cout << b1.book_Name << "\t\t" << b1.price << "\t\t" << b1.page_No << "\n" ;
    cout << b2.book_Name << "\t\t" << b2.price << "\t\t" << b2.page_No << "\n" ;
    cout << b3.book_Name << "\t\t" << b3.price << "\t\t" << b3.page_No << "\n" ;
}