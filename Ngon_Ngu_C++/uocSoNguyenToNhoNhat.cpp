#include <bits/stdc++.h>
using namespace std;

int checkSNT (int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int inUocSNT (int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2;
    if (checkSNT(n))
        return n;
    for (int i = 3; i <= sqrt(n); i ++)
    {
        if (n % i == 0 && checkSNT(i))
            return i;
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
        for (int i = 1; i <= n; i++)
        {
            cout << inUocSNT(i) << " ";
        }
        cout << endl;
    }
    
}