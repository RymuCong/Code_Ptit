#include <iostream>
using namespace std;

int a[20], n = 5, k = 3, dem = 0;

void in ()
{
    int i;
    for (i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;
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
    a[0] = 0;
    quayluiTH(1);
    cout << endl <<dem;
}