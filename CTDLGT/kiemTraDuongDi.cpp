#include <bits/stdc++.h>
using namespace std;

void kiemTraDuongDi (int u, int v, vector< vector<int> > ke, int n)
{
    bool visited[n + 1] = {0};
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int i = 0; i < ke[s].size(); i++)
        {
            if (visited[ke[s][i]] == 0)
            {
                q.push(ke[s][i]);
                visited[ke[s][i]] = 1;
            }
        }
    }
    if (visited[v] == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> ke(n + 1);
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            kiemTraDuongDi(u, v, ke, n);
        }
    }
}