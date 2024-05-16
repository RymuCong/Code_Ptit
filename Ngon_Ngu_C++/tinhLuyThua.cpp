#include <bits/stdc++.h>
using namespace std;

long long tinhLuyThua (long long x, long long y, long long p)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    long long div = tinhLuyThua(x,y/2,p);

    long long result = (div * div) % p;

    if (y % 2 == 0)
        return result;

    return (x * result) % p;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x,y,p;
        cin >> x >> y >> p;
        cout << tinhLuyThua(x,y,p) << endl;
    }
}