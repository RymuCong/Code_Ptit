#include <bits/stdc++.h>
using namespace std;

bool checkNguyenAm(string &s)
{
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == 'A' || s[i] == 'E')
        {
            if (s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E')
            {
                return false;
            }
        }
    }
    return true;
}

void sinhNP(char c)
{
    string s = "A";
    for (char i = 'B'; i <= c; ++i)
    {
        if (i != 'E')
            s += i;
    }
    
    if (c >= 'E')
        s += 'E';

    sort(s.begin(), s.end());

    do
    {
        if (checkNguyenAm(s))
        {
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));
}

int main()
{
    char c;
    cin >> c;
    sinhNP(c);
}