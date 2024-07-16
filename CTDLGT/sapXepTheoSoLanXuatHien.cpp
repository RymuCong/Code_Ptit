#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
            for (int j = 0; j < i.second; ++j)
                cout << i.first << " ";
        cout << endl;
    }
}