#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2], b[n + 2];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a + 1, a + n + 1);
        int l = 1, r = n;
        while (a[l] == b[l])
            l++;
        while (a[r] == b[r])
            r--;
        cout << l << " " << r << endl;
    }
    return 0;
}