#include <iostream>
using namespace std;

int a[20], b[20], n = 4;

void in ()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int SinhHV ()
{
    int i, j = n - 1;
    while (j > 0 && a[j] > a[j+1])
        j--;
    if (j == 0)
        return 1;
    for (i = n; i > j; i--)
        if (a[i] > a[j])
        {
            swap(a[i],a[j]);
            break;
        }
    int l = j+1, r = n;
    while (l < r)
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }
    for (i = 1; i <= n; i++)
        b[i] = a[i];
    return 0;
}

int main ()
{
    int cauhinhcuoi;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    do
    {
        in();
        cauhinhcuoi = SinhHV();
        for (int i = 1; i <= n; i++)
            a[i] = b[i];
    } while (cauhinhcuoi == 0);
}