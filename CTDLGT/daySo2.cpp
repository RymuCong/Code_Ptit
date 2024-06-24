#include <bits/stdc++.h>
using namespace std;

void sinhDaySo(vector<int> a)
{
    vector<vector<int>> res;
    res.push_back(a);
    while (a.size() > 1)
    {
        vector<int> b;
        for (int i = 0; i < a.size() - 1; i++)
            b.push_back(a[i] + a[i + 1]);
        res.push_back(b);
        a = b;
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++)
        {
            if (j == res[i].size() - 1)
                cout << res[i][j];
            else
                cout << res[i][j] << " ";
        }
        cout << "]" << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sinhDaySo(a);
        cout << endl;
    }
}