#include <iostream>
using namespace std;

int check(int a[], int n, int hv[])
{
    for (int i = 1; i <= n; i++)
        if (a[i] != hv[i])
            return 0;
    return 1;
}

void quayLui(int a[], int n, int hv[], int unused[], int &dem, int j)
{
    for (int i = 1; i <= n; i++)
    {
        if (unused[i] == 1)
        {
            a[j] = i;
            unused[i] = 0;
            if (j == n)
            {
                dem++;
                if (check(a, n, hv))
                {
                    cout << dem << endl;
                    return;
                }
            }
            else
                quayLui(a, n, hv, unused, dem, j + 1);
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
        int a[10], n, hv[10], unused[10], dem = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            unused[i] = 1;
            cin >> hv[i];
        }
        quayLui(a, n, hv, unused, dem, 1);
    }
}