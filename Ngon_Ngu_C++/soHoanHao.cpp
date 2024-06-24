#include <bits/stdc++.h>
using namespace std;

int checkSHH(long long n)
{
    if (n == 1 || n > 1e12)
        return false;
    long long sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                sum += i;
            else
                sum += i + n / i;
        }
        if (sum > n)
            return 0;
    }
    if (sum == n)
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (checkSHH(n))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}