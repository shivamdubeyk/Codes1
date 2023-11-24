#include<iostream>
#include<cstdlib>

int main()
{
    int *p , n ;
    
    std :: cout << "asfj : " ;
    std :: cin >> n ;
    
    p = (int*)malloc(4*sizeof(int));  

    if (p == NULL)
    {
        std :: cout << "\nNo memory is allocated : " ;

    }
    else
    {
        std :: cout << " \nsjghsf" ;
        for (int i = 0 ; i < n - 2 ; i++ )
        {
            p[i] = i + 1 ;
        }
        for (int i = 0 ; i < n - 2 ; i++ )
        {
            std :: cout << "\nhakdhadkadhkadad : " << p[i] ;
        }
    }
    
    // free(p) ;
    std :: cout << "\nfhsi = " << ; 
    free ( p ) ;
    std :: cout << "\ndsihfssds = " << ; 
    
    return 0 ;
}