#include <bits/stdc++.h>
using namespace std;

int demSo(string s, int k)
{
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int sodu = 0;
        for (int j = i; j < s.length(); j++)
        {
            sodu = sodu * 10 + (s[j] - '0');
            sodu %= k;
            if (sodu == 0)
                dem++;
        }
    }
    return dem;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << demSo(s,8) - demSo(s,24) << endl;
    }
}