#include <bits/stdc++.h>
using namespace std;

void check (vector <int> a)
{
    int min2 = 1e8;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] < min2 && a[i] != a[0])
            min2 = a[i];
    }
    if (min2 == 1e8)
        cout << -1 << endl;
    else
        cout << a[0] << " " << min2 << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        check(a);
    }
}
