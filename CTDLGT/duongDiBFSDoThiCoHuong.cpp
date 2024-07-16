#include <bits/stdc++.h>
using namespace std;

void bfs (int u, int v, vector<vector<int>> ke, int V)
{
    queue<int> q;
    vector<int> visited(V + 1, 0);
    vector<int> path(V + 1, 0);
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (int x : ke[s])
        {
            if (visited[x] == 0)
            {
                q.push(x);
                visited[x] = 1;
                path[x] = s;
            }
        }
    }
    if (visited[v] == 0)
    {
        cout << "-1" << endl;
        return;
    }
    else
    {
        int j = v;
        stack<int> st;
        while (j != u)
        {
            st.push(j);
            j = path[j];
        }
        st.push(u);
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E, u, v;
        cin >> V >> E >> u >> v;
        vector<vector<int>> ke(V + 1);
        for (int i = 0; i < E; i++)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
        }
        bfs(u, v, ke, V);
    }
}