#include <bits/stdc++.h>
using namespace std;

void sapDat(map<char, int> m, int max, int n)
{
    if (max > (n + 1) / 2)
    {
        cout << "-1" << endl;
        return;
    }
    vector<char> v(n);
    int i = 0;
    for (auto x : m)
    {
        while (x.second > 0)
        {
            v[i] = x.first;
            i += 2;
            if (i >= n)
                i = 1;
            x.second--;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i+1])
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
        string s;
        cin >> s;
        int max = 0;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
            if (m[s[i]] > max)
                max = m[s[i]];
        }
        sapDat(m, max, s.size());
    }
}