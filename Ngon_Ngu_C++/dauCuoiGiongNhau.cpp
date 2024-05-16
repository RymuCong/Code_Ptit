#include <bits/stdc++.h>
using namespace std;

int catChuoi(string s)
{
    int dem = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        dem++;
        for (int j = i+1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                dem++;
            }
        }
    }
    return dem + 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << catChuoi(s) << endl;
    }
}