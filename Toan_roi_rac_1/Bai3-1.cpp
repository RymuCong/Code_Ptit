/*
Bài 3.1. Sinh tất cả các xâu nhị phân độ dài n
Case=1

input =

1

output =

0

1

Case=2

input =

2

output =

0 0

0 1

1 0

1 1

Case=3

input =

3

output =

0 0 0

0 0 1

0 1 0

0 1 1

1 0 0

1 0 1

1 1 0

1 1 1
*/

#include <stdio.h>

int sinhXauNP(int xauHientai[], int xauTieptheo[], int n)
{
    int k, i, cauhinhcuoi = 1; // 0 0 0 0 // 0 0 0 1 // 0 0 1 0
    for (i = n; i >= 1; i--)
        if (xauHientai[i] == 0)
        {
            k = i; // k = 4 // k = 3 // k = 4
            cauhinhcuoi = 0;
            break;
        }
    if (cauhinhcuoi == 1)
        return 1;
    for (i = 1; i <= k - 1; i++) // 1 -> 3 = 0 0 0 // 1 -> 2 = 0 0 // 1 -> 3 = 0 0 1
        xauTieptheo[i] = xauHientai[i];
    for (i = k; i <= n; i++) // 4 -> 4 // 3 -> 4 // 4 -> 4
        xauTieptheo[i] = 1 - xauHientai[i]; // 1 // 1 0 // 1
    return 0; // 0 0 0 1 // 0 0 1 0 // 0 0 1 1
}
// int SinhNP()
// {
//     int i, j = n;
//     while (j > 0 && a[j] == 1)
//         j--;
//     if (j == 0)
//         return 1;
//     for (i = 1; i < j; i++)
//         b[i] = a[i];
//     for (i = j; i <= n; i++)
//         b[i] = 1 - a[i];
//     return 0;
// }

// void SinhNPnext()
// {
//     int i, j = n;
//     while (j > 0 && a[j] == 1)
//         j--;
//     for (i = j; i <= n; i++)
//     {
//         a[i] = 1 - a[i];
//     }
// }
int main()
{
    int n, i, cauhinhcuoi, xauHientai[20], xauTieptheo[20];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        xauHientai[i] = 0;
    do
    {
        for (i = 1; i <= n; i++)
            printf("%d ", xauHientai[i]);
        printf("\n");
        cauhinhcuoi = sinhXauNP(xauHientai, xauTieptheo, n);
        for (i = 1; i <= n; i++)
            xauHientai[i] = xauTieptheo[i];
    } while (cauhinhcuoi == 0);
}
