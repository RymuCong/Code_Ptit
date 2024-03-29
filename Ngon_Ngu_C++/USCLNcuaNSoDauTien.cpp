#include <iostream>
using namespace std;

long long GCD (long long a, long b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long s = 1;
        for (int i = 1; i <= n; i++)
            if (s % i != 0)
                s = (s*i)/GCD(s,i);
        cout << s << endl;
    }
}