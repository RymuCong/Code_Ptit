#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> w(n + 1);
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> w[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> v[i];
        }
        vector<int> f(m + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            for (int j = m; j >= w[i]; j--)
            {
                f[j] = max(f[j], f[j - w[i]] + v[i]);
            }
        }
        cout << f[m] << endl;
    }
    return 0;
}