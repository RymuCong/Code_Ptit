#include <bits/stdc++.h>
using namespace std;

void checkFibonacci (long long n)
{
    long long a = 0, b = 1, c = 0;
    while (c < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == n)
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
        long long n;
        cin >> n;
        checkFibonacci(n);
    }
}