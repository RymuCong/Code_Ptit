#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, dem = 0;
        cin >> n >> k;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
                dem++;
        }
        if (dem != 0)
            cout << dem << endl;
        else
            cout << -1 << endl;
    }
}