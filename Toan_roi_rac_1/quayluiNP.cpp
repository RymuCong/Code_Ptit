#include <iostream>
using namespace std;

int a[20], n = 3;

void in ()
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void quayluiNP (int j)
{
    for (int i = 0; i <= 1; i++)
    {
        a[j] = i;
        if (j == n)
            in();
        else
            quayluiNP(j+1);
    }
}

int main ()
{
    quayluiNP(1);
}