#include <bits/stdc++.h>
using namespace std;

int catChuoi (string s)
{
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    { 
        k = k*2 + (s[i] - '0');
        k %= 5;
    }
    if (k == 0)
        return 1;
    return 0;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (catChuoi(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}