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
        vector <int> a(n);
        map <int, bool> used;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            used[a[i]] = true;
        }
        int dem = 0;
        for (int i = *min_element(a.begin(),a.end()); i < *max_element(a.begin(),a.end()); i++)
        {
            if (!used[i])
                dem++;
        }
        cout << dem << endl;
    }
}