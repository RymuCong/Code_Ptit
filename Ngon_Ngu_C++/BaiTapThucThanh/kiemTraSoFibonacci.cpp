#include <iostream>
using namespace std;

bool checkFibo(long long n)
{
    long long a = 0;
    long long b = 1;
    while (a < n)
    {
        long long temp = a;
        a = b;
        b = temp + b;
    }
    return n == a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (checkFibo(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
