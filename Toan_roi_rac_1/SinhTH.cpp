#include <iostream>
using namespace std;

int a[20], b[20], n = 6, k = 4;

void in ()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
}

int SinhTH ()
{
    int j = k;
    while (j > 0 && a[j] == n - k + j)
        j--;
    if (j == 0)
        return 1;
    for (int i = 1; i < j; i++)
        b[i] = a[i];
    b[j] = a[j] + 1;
    for (int i = j+1; i <= k; i++)
        b[i] = b[j] + i - j;
    return 0;
}

void SinhTHnext ()
{
    int j = k;
    while (j > 0 && a[j] == n - k + j)
        j--;
    a[j]++;
    for (int i = j+1; i <= k; i++)
        a[i] = a[j] - j + i;
}

int main ()
{
    int cauhinhcuoi;
    for (int i = 1; i <= k; i++)
        a[i] = i;
    // do
    // {
    //     in();
    //     cauhinhcuoi = SinhTH();
    //     for (int i = 1; i <= k; i++)
    //         a[i] = b[i];
    // } while (cauhinhcuoi == 0);
    SinhTHnext();
    SinhTHnext();
    SinhTHnext();
    SinhTHnext();
    SinhTHnext();
    in();
}