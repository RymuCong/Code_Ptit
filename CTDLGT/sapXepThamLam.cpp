#include <bits/stdc++.h>
using namespace std;

void check(vector<int> a, vector<int> b)
{
    int n = b.size();
    int tb = b[0] + b[n - 1];

    for (int i = 0; i < n/2; i++)
    {
        if (b[i] + b[n - i - 1] != tb)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a.begin(), a.end());
        check(a,b);
    }
}