//count of positive,negative number or zeroes entered.

#include<iostream>
using namespace std ;
int main()
{
    int pos,neg,zer,num;
    char ans='y';

    pos=neg=zer=0;

    while(ans=='Y'||ans=='y')
    {
        num=0;
        cout <<"Enter numbers :";
        cin >> num ;

        if (num>0)
        {
            pos++;
        }
        else if (num<0)
        {
            neg++;
        }
        else if (num==0)
        {
            zer++;
        }
        fflush (stdin);  //CLEARS STANDARD INPUT STREAM.

        cout <<"\nDo you want to enter more numbers ?(y/n)";
        cin >> ans ;
    }
    cout <<"\n number of positive numbers entered : " << pos ;
    cout <<"\n number of negative numbers entered : " << neg;
    cout <<"\n number of zeroes entered : " << zer;
    return 0;
}