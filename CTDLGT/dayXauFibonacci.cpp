#include <bits/stdc++.h>
using namespace std;

long long a[100];
void fibonacci()
{
    a[1] = a[2] = 1;
    for (int i = 3; i <= 93; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
}

void xauAB(int n, long long j)
{
    while (1)
    {
        if (n == 1 || n == 2)
        {
            if (n == 1)
                cout << "A" << endl;
            else
                cout << "B" << endl;
            return;
        }
        if (j > a[n - 2])
        {
            j -= a[n - 2];
            n--;
        }
        else    
        {   
            n -= 2;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    fibonacci();
    while (t--)
    {
        int n;
        long long j;
        cin >> n >> j;
        xauAB(n, j);
    }
}