// Programming exercise 
/*
3.9: Write a program to calculate the variance and standard deviation of
N numbers
Variance = 1/N ∑(xi -x) 2
Standard deviation = √1 / N ∑ (xi - x) 2
Where x = 1 / N ∑ xi 
*/
#include<iostream>
#include<cmath>
using namespace std ;

double fun (double arr , int n ) ; // Function to calculate mean 

int main ()
{
    int N ;
    double x[N] , term , Var , Mean ,Sd , sum ;

    cout << "Enter N (number of term) : " ;
    cin >> N ;

    cout << "\nEnter values of x column : \n" ; // getting values of x 
    for (int i = 0; i < N ; i++ )
    {
        cout << "x" << i << " : " ;
        cin >> x[N] ;
    }
    
    cout << " Data entered : \n " ;
    for (int i = 0 ; i < N ; i++)           // Printing data entered 
    {
        cout << i << "." << " x" << i << " : "<< x[i] << endl ;
    }
    Mean = fun(x[N] , N ) ; // Calling function to calculate mean

    for ( int i = 0 ; i < N ; i++ ) // Calculation of variance 
    {
        term = pow (( x[i] - Mean ) ,2 ) ;
        sum += term ;
    }
    
    Var = (1/ N) * sum ;
    Sd = sqrt (Var) ;
    
    cout << "\nMean is : " << Mean << "\nVariance is : " << Var << endl << "Standard deviation : " << Sd ;
    return 0 ;
}

double fun (double arr[] , int n ) // Function definition
{
    double sum = 0 , mean ;

    for (int i = 0 ; i < n ; i++)
    {
        sum += arr[i] ;
    }
    mean = sum / n ;
    return mean ;
}