#include <bits/stdc++.h>
using namespace std;

void soNhoNhat()
{
    int n;
    cin >> n;
    int a[n - 1];
    vector<bool> b(n + 1, 0);
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!b[i])
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        soNhoNhat();
}