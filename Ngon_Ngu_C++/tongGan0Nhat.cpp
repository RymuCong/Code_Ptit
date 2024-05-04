#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min = 1e7, gan;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
            for (int j = i+1; j < n; j++)
            {
                if (abs(a[i]+a[j]) < min)
                {
                    min = abs(a[i]+a[j]);
                    gan = (a[i] + a[j]);
                }
            }
        cout << gan << endl;
    }
}