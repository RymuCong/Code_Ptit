#include <bits/stdc++.h>
using namespace std;

void phanTichSnt(int n, int a[], int &k) {
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            a[k++] = i;
            n /= i;
        }
    }
    if (n > 1) {
        a[k++] = n;
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[50], dem = 0;
        cin >> n >> k;
        phanTichSnt(n,a,dem);
        if (dem >= k)
            cout << a[k-1] << endl;
        else
            cout << "-1" << endl;
    }
}