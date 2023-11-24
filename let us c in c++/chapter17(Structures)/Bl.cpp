/**/

#include<iostream>
using namespace std ;

struct hurricane
{
    unsigned int low_speed ;
    unsigned int high_speed ;
    unsigned char category[10] ; 
} ;

struct hurricane h[] = {
                            74 , 95 , "I",
                            98 , 110 , "II",
                            111 , 130 , "III",
                            131 , 155 , "IV",
                            155 , 200 , "V"
                       } ;
int main()
{
    int ws , i ; 

    cout << "\nEnter windspeed : " ;
    cin >> ws ;

    for ( i = 0; i <= 4 ; i++)
    {
        if ((h[i].low_speed <= ws ) && (h[i].high_speed >= ws))
        {
            cout << "Category = " << h[i].category ;
        }    
    }
    return 0 ;
}