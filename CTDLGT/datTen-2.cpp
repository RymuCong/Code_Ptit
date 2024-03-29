#include <iostream>
using namespace std;

void in (int a[], int k)
{
    int i;
    for (i = 1; i <= k; i++)
        cout << (char) (a[i] + 64);
    cout << endl;
}

void quayluiTH (int a[], int n, int k, int j)
{
    for (int i = a[j-1] + 1 ; i <= n - k + j ; i++)
    {
        a[j] = i;
        if (j == k)
            in(a,k);
        else
            quayluiTH(a,n,k,j+1);
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[20], n, k;
        cin >> n >> k;
        a[0] = 0;
        quayluiTH(a,n,k,1);
        cout << endl;
    }
  
}