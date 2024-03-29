#include <iostream>
#include <cmath>
using namespace std;

void phanTichSnt(long long n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
            n /= i;
    }
    if (n > 1)
        cout << n << endl;
    else
        cout << i-1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        phanTichSnt(n);
    }
}