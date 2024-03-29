#include <iostream>
using namespace std;

int a[20] = {0}, n = 5;
int b[20];

void in ()
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void SinhNPnext()
{
    int i, j = n;
    while (j > 0 && a[j] == 1)
        j--;
    for (i = j; i <= n; i++)
    {
        a[i] = 1 - a[i];
    }
}

int SinhNP()
{
    int i, j = n;
    while (j > 0 && a[j] == 1)
        j--;
    if (j == 0)
        return 1;
    for (i = 1; i < j; i++)
        b[i] = a[i];
    for (i = j; i <= n; i++)
        b[i] = 1 - a[i];
    return 0;
}

int main ()
{
    int cauhinhcuoi;
    do
    {
        in();
        cauhinhcuoi = SinhNP();
        int i;
        for (i = 1; i <= n; i++)
            a[i] = b[i];
    } while (cauhinhcuoi == 0);
    
}