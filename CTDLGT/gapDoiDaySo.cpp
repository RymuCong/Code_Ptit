#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int res = 1;
        while (k % 2 != 1)
        {
            res++;
            k /= 2;
        }
        cout << res << endl;
    }
}