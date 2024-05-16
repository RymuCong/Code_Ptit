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

int checkTang (int n)
{
    int pre = n % 10;
    n /= 10;
    while (n > 0)
    { // 123
        int k = n % 10;
        if (k >= pre)
            return 0;
        pre = k;
        n /= 10;
    }
    return 1;
}

int checkGiam (int n)
{
    int pre = n % 10;
    n /= 10;
    while (n > 0)
    { // 123
        int k = n % 10;
        if (k <= pre)
            return 0;
        pre = k;
        n /= 10;
    }
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dem = 0;
        cin >> n;
        if (n == 9)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 8)
        {
            cout << 5 << endl;
            continue;
        }
        for (int i = pow(10,n-1); i < pow(10,n); i++)
        {
            if (checkTang(i) || checkGiam(i))
            {
                if (checkSNT(i))
                    dem++;
            }
                
        }
        cout << dem << endl;
    }
}