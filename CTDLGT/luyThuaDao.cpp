#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long soDao(long long n)
{
    long long dao = 0;
    while (n > 0)
    {
        int k = n % 10;
        dao = dao * 10 + k;
        n /= 10;
    }
    return dao;
}

long long luyThua(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = luyThua(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n;
        k = soDao(n);
        cout << luyThua(n, k) << endl;
    }
}