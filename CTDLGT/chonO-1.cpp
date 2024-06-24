#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[21][21];
        
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }

        int c[n+1];
        for (int i = 1; i <= n; i++)
            c[i] = i;

        int max = 0;
        while (next_permutation(c+1, c+n+1))
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += a[i][c[i]];
            }
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    }
}