#include <bits/stdc++.h>
using namespace std;

void sinhLocPhat(int a[], int n, int j)
{
    for (int i = 6; i <= 8; i += 2)
    {
        a[j] = i;
        if (a[1] == 6 || (a[j] == 8 && a[j - 1] == 8) || (a[j] == 6 && a[j - 1] == 6 && a[j - 2] == 6 && a[j - 3] == 6))
        {
            continue;
        }
        if (j == n)
        {
            if (a[n] == 6)
            {
                for (int k = 1; k <= n; k++)
                    cout << a[k];
                cout << endl;
            }
        }
        else
            sinhLocPhat(a, n, j + 1);
    }
}

int main()
{
    int n, a[20];
    cin >> n;
    sinhLocPhat(a, n, 1);
}