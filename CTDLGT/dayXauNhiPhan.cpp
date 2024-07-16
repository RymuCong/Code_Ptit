#include <bits/stdc++.h>
using namespace std;

long long f[100];

void fibo ()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 93; i++)
        f[i] = f[i - 1] + f[i - 2];
}

int XauNhiPhan (int n, long long k)
{
    while (1)
    {
        if (n == 1)
        {
            cout << "0" << endl;
            return 0;
        }
        if (n == 2)
        {
            cout << "1" << endl;
            return 0;
        }
        if (k > f[n - 2])
        {
            k -= f[n - 2];
            n--;
        }
        else
        {
            n -= 2;
        }
    }
}

int main ()
{
    int t;
    cin >> t;
    fibo();
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        XauNhiPhan(n, k);
    }
}