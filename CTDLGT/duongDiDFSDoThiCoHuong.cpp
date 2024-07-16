#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int v, vector<vector<int>> ke, int V)
{
    stack<int> st;
    vector<int> visited(V + 1, 0);
    vector<int> path(V + 1, 0);
    st.push(u);
    visited[u] = 1;
    while (!st.empty())
    {
        int s = st.top();
        st.pop();
        for (int i = 0; i < ke[s].size(); i++)
        {
            if (visited[ke[s][i]] == 0)
            {
                st.push(s);
                st.push(ke[s][i]);
                visited[ke[s][i]] = 1;
                path[ke[s][i]] = s;
                break;
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

int main()
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
        dfs(u, v, ke, V);
    }
}