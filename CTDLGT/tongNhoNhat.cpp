#include <bits/stdc++.h>
using namespace std;

void tongMin ()
{
    long long a = 0, b = 0;
    int n;
    cin >> n;
    vector <int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s.begin(),s.end());
    for (int i = 0; i < n; i += 2)
        a = (a * 10) + s[i];
    for (int i = 1; i < n; i += 2)
        b = (b * 10) + s[i];
    cout << (long long)(a + b) << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        tongMin();
    }
}