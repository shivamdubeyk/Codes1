/**/

#include<iostream>
#include<cstring>

using namespace std ;

struct player
{
    char name [20];
    int rank[3] ;
    int total ; 
} ;

struct player p[5] = {
                        "Sachin", {0} , 0 ,
                        "Ponting", {0} , 0 ,    
                        "Rahul", {0} , 0 ,
                        "Mahela", {0} , 0 ,   
                        "Gayle", {0} , 0 ,   
                     } ;
int main()
{
    int judge , i , big ; 
    char winner[20] ;

    for ( judge = 0; judge <= 2 ; judge++ )
    {
        cout << " \nEnter your rank " ;
        for ( i = 0 ; i <= 4 ; i++)
        {
            cout << p[i].name << " : " ;
            cin >> p[i].rank[judge] ;
            p[i].total += p[i].rank[judge] ;
        }
              
    }

    big = p[0].total ;
    for ( i = 1 ; i <= 4 ; i++)
    {
        if (p[i].total > big)
        {
            big = p[i].total ;
            strcpy(winner,p[i].name) ;
        }
    }
    cout << "Winner is " << winner ;
    return 0 ;
}