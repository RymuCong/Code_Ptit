#include <iostream>
using namespace std;

int check(int a[], int k, int hv[])
{
    for (int i = 1; i <= k; i++)
        if (a[i] != hv[i])
            return 0;
    return 1;
}

void quayLui(int a[], int n, int k, int hv[], int &dem, int j)
{
    for (int i = a[j - 1] + 1; i <= n - k + j; i++)
    {
        a[j] = i;
        if (j == k)
        {
            dem++;
            if (check(a, k, hv))
            {
                cout << dem << endl;
                return;
            }
        }
        else
            quayLui(a, n, k, hv, dem, j + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10], n, k, hv[10], dem = 0;
        cin >> n >> k;
        a[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> hv[i];
        quayLui(a, n, k, hv, dem, 1);
    }
}