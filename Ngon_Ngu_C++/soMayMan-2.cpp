#include <bits/stdc++.h>
using namespace std;

void chiaSo (int &n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    n = sum;
}

void checkMayMan (string n)
{
    int sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += n[i] - '0';
    }
    while (sum > 9)
        chiaSo(sum);

    if (sum == 9)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        checkMayMan(n);
    }
}