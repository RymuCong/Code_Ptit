#include <bits/stdc++.h>
using namespace std;

int check (string s)
{
    for (int i = 0; i < s.length(); i++)
        if ((s[i] - '0') % 2 != 0)
            return 0;
    return 1;        
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}