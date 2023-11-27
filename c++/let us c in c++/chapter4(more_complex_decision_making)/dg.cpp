//body mass index.
#include<iostream>
using namespace std;
int main()
{
    float w,h,r,bmi;

    cout << "\nEnter the weight and height : " ;
    cin >> w >> h ;

    bmi=w/(h*h);

    if (bmi<15)
    {
        cout << "\nStarvation.";
    }
    else if ((bmi>=15.1)&&(bmi<=17.5))
    {
        cout << "\nAnorexic.";
    }
    else if ((bmi>=17.6)&&(bmi<=18.5))
    {
        cout << "\nUnderweight.";
    }
    else if ((bmi>=18.6)&&(bmi<=24.9))
    {
        cout << "\nIdeal.";
    }
    else if ((bmi>=25)&&(bmi<=25.9))
    {
        cout << "\nOverweight.";
    }
    else if ((bmi>=30)&&(bmi<=30.9))
    {
        cout << "\nObese.";
    }
    else if ((bmi>=40))
    {
        cout << "\nMorbidly Obese.";
    }
    return 0;
}