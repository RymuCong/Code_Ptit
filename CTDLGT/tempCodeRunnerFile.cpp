#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> a(1001);
int n, dem = 1;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void sapXep()
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first >= a[j].second)
        {
            dem++;
            j = i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
        }
        sort(a.begin(), a.begin() + n, cmp);
        sapXep();
        cout << dem << endl;
        dem = 1;
    }
}