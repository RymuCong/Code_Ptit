// 12345 % 12
// (0 * 10 + 1) % 12 = 1
// (1 * 10 + 2) % 12 = 0
// (0 * 10 + 3) % 12 = 3
// (3 * 10 + 4) % 12 = 10
// (10 * 10 + 5) % 12 = 9
// 12345 % 12 = 9

#include <bits/stdc++.h>
using namespace std;

void chiaDu (string s, long long k)
{
    long long res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = (res * 10 + (s[i] - '0')) % k;
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        long long k;
        cin >> s >> k;
        chiaDu(s,k);
    }
    return 0;
}