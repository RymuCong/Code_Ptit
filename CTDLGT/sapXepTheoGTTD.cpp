#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector < pair<int, int> > a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = abs(a[i].first - x);
        }
        
        stable_sort(a.begin(), a.end(), cmp);

        for (int i = 0; i < n; i++)
        {
            cout << a[i].first << " ";
        }

        cout << endl;
    }
    
}