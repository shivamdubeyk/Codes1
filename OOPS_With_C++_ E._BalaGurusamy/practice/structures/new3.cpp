// pre define Initialize structure  ( not at run time ) 
#include<iostream>
using namespace std ;

int main()
{
    struct book
    {
        char book_Name ; double price ; int page_No ;
    };
    struct book b1 = {'c' , 9032.3 ,7883 } ;
    struct book b2 = {'d' , 89.98 , 767 } ;
    // cout << " \nEnter book name , book price , book page number : " ;
    // cin >> b1.book_Name >> b1.price >> b1.page_No ;
    // cout << " \nEnter book name , book price , book page number : " ;
    // cin >> b2.book_Name >> b2.price >> b2.page_No ;
    // cout << " \nEnter book name , book price , book page number : " ;
    // cin >> b3.book_Name >> b3.price >> b3.page_No ;
    cout << "Book Name      price       page no." << endl  ;
    cout << b1.book_Name << "\t\t" << b1.price << "\t\t" << b1.page_No << "\n" ;
    cout << b2.book_Name << "\t\t" << b2.price << "\t\t" << b2.page_No << "\n" ;
    // cout << b3.book_Name << "\t\t" << b3.price << "\t\t" << b3.page_No << "\n" ;
}