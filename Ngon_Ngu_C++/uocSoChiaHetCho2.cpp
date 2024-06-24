#include <bits/stdc++.h>
using namespace std;

int check (int n)
{
    if (n % 2 != 0)
        return 0;
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                dem++;
            if ((n / i) % 2 == 0 && i != n / i)
                dem++;
        }
    }
    return dem;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
}