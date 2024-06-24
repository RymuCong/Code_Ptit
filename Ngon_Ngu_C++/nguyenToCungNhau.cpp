#include <bits/stdc++.h>
using namespace std;

int checkSNT(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, dem = 0;
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            if (__gcd(i, x) == 1)
                dem++;
        }
        if (checkSNT(dem))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}