#include <iostream>
using namespace std;

int check (int a[], int n, int k)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == 1)
            dem++;
    if (dem == k)
        return 1;
    else
        return 0;
}

void quayLui (int a[], int n, int k, int j)
{
    for (int i = 0; i <= 1; i++)
    {
        a[j] = i;
        if (j == n)
        {
            if (check(a,n,k))
            {
                for (int k = 1; k <= n; k++)
                    cout << a[k];
                cout << endl;
            }
            
        }
        else
            quayLui(a,n,k,j+1);
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k, a[20];
        cin >> n >> k;
        quayLui(a,n,k,1);
    }
}