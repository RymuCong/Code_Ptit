#include <iostream>
using namespace std;

int n, k, a[100], c[100], dem = 0;

void in ()
{
    int i;
    for (i = 1; i <= n; i++)
        if (a[i] != 0)
            cout << c[i] << " ";
    cout << endl;
    dem++;
}

void tongDayCon ()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i]*c[i];
    }
    if (sum == k)
        in();
}

void quayluiNP (int j)
{
    for (int i = 0; i <= 1; i++)
    {
        a[j] = i;
        if (j == n)
        {
            tongDayCon();
        }
        else
            quayluiNP(j+1);
    }
}

int main ()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    quayluiNP(1);
    cout << dem;
}