#include <iostream>
using namespace std;

void SoSanh (int a[],int b[], int k)
{
    int dem = 0;
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            if (a[i] == b[j])
            {
                dem++;
                i++;
            }
    cout << k - dem << endl;
}

void SinhTHnext (int a[],int b[], int n, int k)
{
    int j = k;
    while (j > 0 && a[j] == n - k + j)
        j--;
    a[j]++;
    for (int i = j+1; i <= k; i++)
        a[i] = a[j] - j + i;
    if (j == 0)
    {
        cout << k << endl;
    }
    else
        SoSanh(a,b,k);
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[40],b[40], n, k;
        cin >> n >> k;
        int cauhinhcuoi;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        SinhTHnext(a,b,n,k);
    }
   
}