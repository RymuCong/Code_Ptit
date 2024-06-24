#include <bits/stdc++.h>
using namespace std;

void bfs (vector<vector<int>> a, int u)
{
    queue<int> q;
    q.push(u);
    vector<bool> visited(a.size(), false);

    while (!q.empty())
    {
        int s = q.front();
        q.pop();

        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }

        for (int x : a[s])
        {
            if (!visited[x])
            {
                q.push(x);
            }
        }   
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;

        vector< vector<int> > a(v + 1);

        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }

        bfs(a,u);
        cout << endl;
    }
    
}