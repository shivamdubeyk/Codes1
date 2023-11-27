// Programming exercise
/*
3.8: Write a program to print a table of values of the function
    Y = e-x
For x varying from 0 to 10 in steps of 0.1. The table should appear as follows

TABLE FOR Y = EXP[-X] ;
X   0.1     0.2     0.3     0.4     0.5     0.6     0.7     0.8     0.9 
0.0
1.0
.
.
9.0
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std ;

int main()
{
    float x ,y ;
    cout << " TABLE FOR Y=EXP(-X)  :\n\n" ;
    cout << "x" ;
    
    for(float k = 0 ; k < .7 ; k = k + 0.1 )
        cout << setw (10) << k ;
    cout << "\n" ;
    
    for( float k = 0 ; k < 10 * .7 ; k = k + 0.1 )
        cout << "-" ;
    cout<<"\n";
    
    for( float j = 0 ; j < 10 ; j++ )
    {
        cout << j << setw(4) ;
        for (float i = 0 ; i < .7 ; i = i + 0.1)
        {
            x = i + j ;
            y = exp (-x) ;

            cout << fixed << setprecision (6) << setw(10) << float (y) ;
            // cout.precision(6);
            // cout.setf(ios::fixed,ios::floatfield);
            // cout<<setw(10)<<y;
        }
        cout << " \n " ;
    }
    return 0 ;
}
/*
Output :- 
TABLE FOR Y=EXP(-X)  :

x         0       0.1       0.2       0.3       0.4       0.5       0.6
-----------------------------------------------------------------------
0  1.000000  0.904837  0.818731  0.740818  0.670320  0.606531  0.548812 
 1.000000  0.367879  0.332871  0.301194  0.272532  0.246597  0.223130  0.201897 
 2.000000  0.135335  0.122456  0.110803  0.100259  0.090718  0.082085  0.074274 
 3.000000  0.049787  0.045049  0.040762  0.036883  0.033373  0.030197  0.027324 
 4.000000  0.018316  0.016573  0.014996  0.013569  0.012277  0.011109  0.010052 
 5.000000  0.006738  0.006097  0.005517  0.004992  0.004517  0.004087  0.003698 
 6.000000  0.002479  0.002243  0.002029  0.001836  0.001662  0.001503  0.001360 
 7.000000  0.000912  0.000825  0.000747  0.000676  0.000611  0.000553  0.000500 
 8.000000  0.000335  0.000304  0.000275  0.000249  0.000225  0.000203  0.000184 
 9.000000  0.000123  0.000112  0.000101  0.000091  0.000083  0.000075  0.000068 */