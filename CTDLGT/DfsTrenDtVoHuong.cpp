#include <bits/stdc++.h>
using namespace std;

void dfs(vector< vector<int> > a, int u)
{
    stack <int> st;
    st.push(u);
    vector <bool> visited(a.size(), false);

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
    cout << endl;
}

int main()
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
            a[y].push_back(x);
        }
        dfs(a, u);
    }
}