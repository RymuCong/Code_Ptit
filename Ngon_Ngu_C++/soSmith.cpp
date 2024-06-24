#include <bits/stdc++.h>
using namespace std;

int checkSNT (int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int tachSo (int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void timUoc (int n)
{
    int sum = 0, tempN = n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += tachSo(i);
            n /= i;
            i--;
        }
    }
    if (sum == tachSo(tempN) && !checkSNT(tempN))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        timUoc(n);
    }
}