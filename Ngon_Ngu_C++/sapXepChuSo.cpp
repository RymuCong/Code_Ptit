#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set <int> ss;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++)
                ss.insert(s[j] - '0');
        }
        for (int i : ss)
            cout << i << " ";
    cout << endl;
    }
}