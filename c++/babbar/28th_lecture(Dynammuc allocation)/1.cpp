#include<iostream>
using namespace std ;

int Fun(int *arr, int & num);

int main ()
{
    int *arr ;
    int n ;

    cout << "\nEnter n : " ;
    cin >> n ;
    
    arr = new int[n] ;

    cout << "\nEnter elements of array : " ;
    
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << endl ;
    }
    cout << "Answer is : " << Fun(arr , n) ;
    return 0 ;
}

int Fun(int *arr, int & num)
{
    int sum = 0;
    for (int i = 0 ; i < num ; i++)
    {
        sum += arr[i] ;
    }

    return sum ;
}