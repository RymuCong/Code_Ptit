#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = n - 1;
        int res = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == k)
            {
                res = mid;
                break;
            }
            else if (a[mid] < k)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if (res == -1)
            cout << "NO" << endl;
        else
            cout << res + 1 << endl;
    }
}