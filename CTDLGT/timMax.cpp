#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void timMax()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = (sum + i * a[i]) % MOD;
    }
    cout << sum << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        timMax();
    }
    return 0;
}