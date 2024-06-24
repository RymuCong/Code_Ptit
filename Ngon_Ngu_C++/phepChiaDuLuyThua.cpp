// 3^6 % 14
// (1 * 3) % 14 = 3
// (3 * 3) % 14 = 9
// (9 * 3) % 14 = 13
// (13 * 3) % 14 = 11
// (11 * 3) % 14 = 5
// (5 * 3) % 14 = 1

#include <bits/stdc++.h>
using namespace std;

long long chiaDu (string s, long long k)
{
    long long res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = (res * 10 + (s[i] - '0')) % k;
    }
    return res;
}

long long luyThuaNhanh (long long a, long long b, long long c)
{
    long long res = 1;
    // a = 3, b = 6, c = 14
    while (b > 0) // b = 6, 3, 1
    {
        if (b % 2 == 1) // 6 % 2 = 0, 3 % 2 = 1, 1 % 2 = 1
            res = (res * a) % c; // res = 1, 9, 1
        cout << res << endl;
        a = (a * a) % c; // a = 9, 11
        b /= 2; // 3 1
    }

    return res;
}

int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        string a;
        long long b, c, temp;
        cin >> a >> b >> c;
        temp = chiaDu(a, c);
        long long res = luyThuaNhanh(temp, b, c);
        cout << res << endl;
    }
    return 0;
}
