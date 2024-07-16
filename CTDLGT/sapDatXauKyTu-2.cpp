#include <bits/stdc++.h>
using namespace std;

void sapDat(vector<pair<char, int>> m, int n, int gap)
{
    vector<char> v(n);
    int i = 0;
    for (auto x : m)
    {
        while (x.second > 0)
        {
            v[i] = x.first;
            i += gap;
            if (i >= n)
                i = (i % gap) + 1;
            x.second--;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "-1" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        int max = 0;
        vector<pair<char, int>> v(256);
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i]].second++;
            v[s[i]].first = s[i];
            if (v[s[i]].second > max)
                max = v[s[i]].second;
        }
        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b)
             { return a.second > b.second; });
        if (max > (s.size() + 1) / d)
        {
            cout << "-1" << endl;
            continue;
        }
        sapDat(v, s.size(), d);
    }
}