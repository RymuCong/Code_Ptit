#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> cong[n + 1];
        vector<int> tru[n + 1];
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            cong[x].push_back(y);
            tru[y].push_back(x);
        }
        bool isEuler = true;
        for (int i = 1; i <= n; i++)
        {
            if (tru[i].size() != cong[i].size())
            {
                isEuler = false;
                break;
            }
        }
        if (isEuler)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}