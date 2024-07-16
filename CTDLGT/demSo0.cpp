#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[0] == 1)
                res = 0;
            else if (a[i] == 1 && res == 0)
                res = i;
        }
        if (a[n-1] == 0)
            cout << n << endl;
        else
            cout << res << endl;
    }
    
}