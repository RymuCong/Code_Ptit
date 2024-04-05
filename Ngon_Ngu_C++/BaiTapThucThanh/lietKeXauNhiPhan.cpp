#include <iostream>
using namespace std;

void in (int a[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void quayluiNP (int j, int a[], int n)
{
    for (int i = 0; i <= 1; i++)
    {
        a[j] = i;
        if (j == n)
            in(a,n);
        else
            quayluiNP(j+1,a,n);
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20], n;
        cin >> n;
        quayluiNP(1,a,n);
        cout << endl;
    }
}