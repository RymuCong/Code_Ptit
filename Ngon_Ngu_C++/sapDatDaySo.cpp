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
        vector <long long> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = -1;
        }
        for (int i = 0; i < n; i++)
            if (a[i] < n && a[i] >= 0)
                b[a[i]] = a[i];
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}