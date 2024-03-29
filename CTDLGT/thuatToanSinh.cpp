#include <iostream>
using namespace std;

int a[20] = {0}, n;
int b[20];

void in ()
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int check ()
{
    for (int i = 1; i <= n/2; i++)
        if (a[i] != a[n-i+1])
            return 0;
    return 1;
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
    cin >> n;
    int cauhinhcuoi;
    do
    {
        if (check())
            in();
        cauhinhcuoi = SinhNP();
        int i;
        for (i = 1; i <= n; i++)
            a[i] = b[i];
    } while (cauhinhcuoi == 0);
    
}