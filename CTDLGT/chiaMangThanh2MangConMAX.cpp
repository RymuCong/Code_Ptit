#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long gap = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                gap -= a[i];
            else
                gap += a[i];
            if (i < n - k)
                res -= a[i];
            else
                res += a[i];
        }
        cout << (gap > res ? gap : res) << endl;
    }
}