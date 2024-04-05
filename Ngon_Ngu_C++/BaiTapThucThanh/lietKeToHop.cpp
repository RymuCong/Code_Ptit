#include <iostream>
using namespace std;

void in(int a[], int k)
{
    int i;
    for (i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void quayluiTH(int j, int a[], int n, int k)
{
    for (int i = a[j - 1] + 1; i <= n - k + j; i++)
    {
        a[j] = i;
        if (j == k)
            in(a, k);
        else
        {
            quayluiTH(j + 1, a, n, k);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20], n, k;
        cin >> n >> k;
        a[0] = 0;
        quayluiTH(1, a, n, k);
        cout << endl;
    }
}