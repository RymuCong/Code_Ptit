#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> a, int u)
{
    bool visited[a.size()];
    for (int i = 0; i < a.size(); i++)
        visited[i] = false;

    stack<int> st;
    st.push(u);

    while (!st.empty())
    {
        int s = st.top();
        st.pop();

        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }

        for (int x : a[s])
        {
            if (!visited[x])
            {
                st.push(s);
                st.push(x);
                break;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        vector<vector<int>> a(v + 1);

        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        dfs(a, u);
        cout << endl;
    }
}