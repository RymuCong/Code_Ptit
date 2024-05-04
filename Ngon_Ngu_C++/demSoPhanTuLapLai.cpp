#include <bits/stdc++.h>
using namespace std;
void demSoPT(int n)
{
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int d = 0;
    for (auto x : m)
    {
        if (x.second > 1)
            d += x.second;
    }
    cout << d << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        demSoPT(n);
    }
}