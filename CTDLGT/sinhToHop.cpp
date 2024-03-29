#include <iostream>
using namespace std;

int a[20], n, k, dem;

void in ()
{
    int i;
    for (i = 1; i <= k; i++)
        cout << a[i];
    cout << " ";
}

void quayluiTH (int j)
{
    for (int i = a[j-1] + 1; i <= n - k + j; i++)
    {
        a[j] = i;
        if (j == k)
            in();
        else
        {
            quayluiTH(j+1);
            dem++;
        }
            
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a[0] = 0;
        quayluiTH(1);
        cout << endl;
    }
  
}