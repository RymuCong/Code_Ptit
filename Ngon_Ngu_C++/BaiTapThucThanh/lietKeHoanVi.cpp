#include <iostream>
using namespace std;

void in(int a[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void quayluiHV(int j, int a[], int unused[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (unused[i] == 1)
        {
            a[j] = i;
            unused[i] = 0;
            if (j == n)
                in(a, n);
            else
                quayluiHV(j + 1, a, unused, n);
            unused[i] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20], unused[20], n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            unused[i] = 1;
        quayluiHV(1, a, unused, n);
        cout << endl;
    }
}
