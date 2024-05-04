#include <bits/stdc++.h>
using namespace std;

int nhoNhi(vector<int> a)
{
    for (int i = 1; i < a.size(); i--)
    {
        if (a[i] != a[0])
        {
            return a[i];
        }
    }
    return -1;
}

int main()
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
        int min2 = nhoNhi(a);
        if (min2 != -1)
            cout << a[0] << " " << min2 << endl;
        else
            cout << min2 << endl;
    }
}