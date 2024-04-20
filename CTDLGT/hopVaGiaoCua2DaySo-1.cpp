#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        set <int> a, b, hop, giao;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
            hop.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
            hop.insert(x);
        }
        for (int x : a)
        {
            if (b.find(x) != b.end())
                giao.insert(x);
        }
        for (int x : hop)
            cout << x << " ";
        cout << endl;
        for (int x : giao)
            cout << x << " ";
        cout << endl;
    }
}