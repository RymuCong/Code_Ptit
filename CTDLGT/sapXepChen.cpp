#include <bits/stdc++.h>
using namespace std;

void in (vector <int> a, int j)
{
    for (int i = 0; i < j; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main ()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        cout << "Buoc " << j << ": ";
        in(a,i);
        int key = a[i];

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    cout << "Buoc " << n - 1 << ": ";
    in(a,n);
}