#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        double Ya, Yb, Xa, Xb;
        cin >> Xa >> Ya >> Xb >> Yb;
        printf("%.4f\n",sqrt(pow(Xa-Xb,2)+pow(Ya-Yb,2)));
    }
}