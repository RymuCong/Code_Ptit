#include <iostream>
using namespace std;

void in (int a[], int k)
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " "; 
    cout << endl;
}

void SinhTHnext (int a[], int n, int k)
{
    int j = k;
    while (j > 0 && a[j] == n - k + j)
        j--;
    a[j]++;
    for (int i = j+1; i <= k; i++)
        a[i] = a[j] - j + i;
    if (j == 0)
    {
        for (int i = 1; i <= k; i++)
            a[i] = i;
    }  
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[1000], n, k;
        cin >> n >> k;
        int cauhinhcuoi;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        SinhTHnext(a,n,k);
        in(a,k);
    }
   
}