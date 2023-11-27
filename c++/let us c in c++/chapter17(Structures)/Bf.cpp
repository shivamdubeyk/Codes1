/*
Write a menu driven program that depicts the working of a 
library. The menu options should be: 

1. Add book information 
2. Display book information 
3. List all books of given author 
4. List the title of specified book 
5. List the count of books in the library 
6. List the books in the order of accession number 
7. Exit 

Create a structure called library to hold accession number, 
title of the book, author name, price of the book, and flag 
indicating whether book is issued or not.
*/


// INCOMPLETE



#include<iostream>
#include<cstring>

using namespace std ;

struct library
{
    unsigned long int accession_number ;
    unsigned char title[10] ;
    char author[10] ;
    double price ;
    bool flag ;
} ;

struct library book[10] ;

void add_books() ;
void display () ;
void list_author () ;
void list_title () ;
void countn () ;
void details_accession_number () ;

int count = 0 ;

int main ()
{
    int choice ;

    while (1)
    {
        cout << "\n\n\n\n" ;
    
        cout << "\nEnter choice : \nEnter 1 to add book : " ;
        cout << "\nEnter 2 to display list of all books : \nEnter 3 to List all books of given author : " ;
        cout << "\nEnter 4 to List the title of specified book : \nEnter 5 List the count of books in the library : " ;
        cout << "\nEnter 6 to List the books in the order of accession number : \nEnter 7 to Exit : " ;

        cout << "\nYour choice : ";
        cin >> choice ;

        switch ( choice )
        {
        case 1 :
            add_books () ;
            break;

        case 2 :
            display () ;
            break ;
        
        case 3 :
            list_author () ;
            break;

        case 4 :
            list_title () ;
            break ;

        case 5 :
            countn () ;
            break;

        case 6 :
            details_accession_number () ;
            break ;
        
        case 7 :
            exit (0) ;
        
        default :
            cout << "Invalid number or character entered \nPlease try again : " ;
            continue; 
        }
    }
    return 0 ;
}
// Function to add new book :
void add_books () 
{
    if ( count == 9 )
    {
        cout << "No more space to add new book ! " ;
        exit (0) ;
    }
    cout << "Enter accession number : " ;
    cin >> book[count].accession_number ;
    cout << "Enter Title of the book : " ;
    cin >> book[count].title ;
    cout << "Enter Author name : " ;
    cin >> book[count].author ;
    cout << "Enter Price : " ;
    cin >> book[count].price ;
    cout << "Enter status of the book ( 0 for issued and 1 for available ) : " ;
    cin >> book[count].flag ;

    count ++ ;
    cout << "New book (" << book[count].title << ") is added ! " ;
}

// Function to display information of all books.

void display ()
{
    int i ;

    cout << "\nList of all books : \n" ;
     
    for ( i = 0 ; i < count ; i++ )
    {        
        cout << i + 1 << ". Book title : " << book[i].title ;
        cout << "\nAccession number : " << book[i].accession_number ;
        cout << "\nAuthor name : " << book[i].author ;
        cout << "\nPrice : " << book[i].price ;
        cout << "\nStatus  : " ; 
        book[i].flag == 0 ? cout << "Issued !" : cout << "Available ! " ;
    }
}

// Function to display information of books by author name .

void list_author () 
{
    char author[20] ; 
    int i ;
    cout << "Enter author name : " ;
    cin >> author ;

    for ( i = 0 ; i < count; i++ )
    {
        if ((strcmp(book[i].author,author)) == 1 )
        {
            cout << i << ". Book title : " << book[i].title ;
            cout << "\nAccession number : " << book[i].accession_number ;
            cout << "\nAuthor name : " << book[i].author ;
            cout << "\nPrice : " << book[i].price ;
            cout << "\nStatus  : " ; 
            book[i].flag == 0 ? cout << "Issued !" : cout << "Available ! " ;
        }
        else
            continue ;
    }
}

// Function to display book titles of all books .

void list_title () 
{
    int i ;

    for ( i = 0 ; i <= count ; i++ )
    {
        cout << "\n" << i << ". Book title : " << book[i].title ;
    }
}

// Function for printing number of book.

void countn ()
{
    cout << "Total No. of books in library : "<< count ; 
}

// Function for printing a books detail by accession number.

void details_accession_number () 
{
    long int accessionnum ; 
    int i ;

    cout << "Enter accession number : " ;
    cin >> accessionnum ;

    for ( i = 0; i <= count; i++)
    {
        if ( book[i].accession_number == accessionnum )
        {
            cout << i << ". Book title : " << book[i].title ;
            cout << "\nAccession number : " << book[i].accession_number ;
            cout << "\nAuthor name : " << book[i].author ;
            cout << "\nPrice : " << book[i].price ;
            cout << "\nStatus  : " ; 
            book[i].flag == 0 ? cout << "Issued !" : cout << "Available ! " ;
        }
        else
            continue ;
    }
}