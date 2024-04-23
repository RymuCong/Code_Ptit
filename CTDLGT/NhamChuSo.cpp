#include <bits/stdc++.h>
using namespace std;

int timMin(string s)
{
    int n = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '6')
            s[i] = '5';
        n = n * 10 + (s[i] - '0');
    }   
    return n;
}

int timMax(string s)
{
    int n = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '5')
            s[i] = '6';
        n = n * 10 + (s[i] - '0');
    }
    return n;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << timMin(a) + timMin(b) << " " << timMax(a) + timMax(b);
}
