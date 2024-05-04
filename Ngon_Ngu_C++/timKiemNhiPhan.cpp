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
        sort(a.begin(),a.end());
        if (binary_search(a.begin(), a.end(), k))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}