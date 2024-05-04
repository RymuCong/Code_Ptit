#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n ,int x)
{
    for (int i = 1; i <= n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n+1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        cout << check(a,n,x) << endl;
    }
}