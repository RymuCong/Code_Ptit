#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = -1;
        cin >> n;
        vector <int> a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            if (a[i] != b[i] && res == -1)
            {
                res = i + 1;
            }
        }
        if (res == -1)
            cout << n << endl;
        else
            cout << res << endl;
    }
}