#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.length();
        char b[10000];
        for (int i = 65; i < 120; i++)
            b[i] = 0;
        for (int i = 0; i < n; i++)
        {
            b[(int)a[i]]++;
        }
        for (int i = 0; i < n; i++)
            if (b[a[i]] == 1)
                cout << a[i];
        cout << endl;
    }
}