#include <bits/stdc++.h>
using namespace std;

void sinhDaySo (vector <int> a)
{
    int n = a.size();
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << a[i];
        else
            cout << a[i] << " ";
    }
    cout << "]" << endl;
    while (n-- > 1)
    {
        cout << "[";
        for (int i = 0; i < n; i++)
        {
            a[i] = a[i] + a[i + 1];
            if (i == n - 1)
                cout << a[i];
            else
                cout << a[i] << " ";
        }
        cout << "]" << endl;
    }
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

        sinhDaySo(a);
    }
}