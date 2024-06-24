#include <bits/stdc++.h>
using namespace std;

const long long mod = 123456789;

long long demDay (long long n)
{
    if (n == 0)
        return 1;
    long long dem = demDay(n/2);
    if (n % 2 == 0)
        return (dem * dem) % mod;
    else
        return ((dem * dem) % mod * 2) % mod;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << demDay(n-1) << endl;
    }
}