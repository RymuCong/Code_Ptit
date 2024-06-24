#include <bits/stdc++.h>
using namespace std;

int n, k, a[30];

void datTen(vector <string> s, int t)
{
    for (int i = a[t-1] + 1; i <= s.size() - k + t; i++)
    {
        a[t] = i;
        if (t == k)
        {
            for (int j = 1; j <= k; j++)
                cout << s[a[j]-1] << " ";
            cout << endl;
        }
        else
            datTen(s, t+1);
    }
}

int main ()
{
    cin >> n >> k;

    set <string> s;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        s.insert(name);
    }
    vector <string> v;
    
    for (auto& i : s)
        v.push_back(i);

    a[0] = 0;
    datTen(v, 1);
}