#include <iostream>
#include <algorithm>
using namespace std;

int a[10], n, unused[10];

void in(int b[])
{
    int i;
    for (i = 1; i <= n; i++)
        cout << b[a[i]] << " ";
    cout << endl;
}

void quayluiHV(int j, int b[])
{
    for (int i = 1; i <= n; i++)
    {
        if (unused[i] == 1)
        {
            a[j] = i;
            unused[i] = 0;
            if (j == n)
                in(b);
            else
                quayluiHV(j + 1, b);
            unused[i] = 1;
        }
    }
}

int main()
{
    cin >> n;
    int b[n];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(b + 1, b + n);
    for (int i = 1; i <= n; i++)
        unused[i] = 1;
    quayluiHV(1, b);
}