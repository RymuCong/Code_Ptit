#include <iostream>
using namespace std;

void chiaHet (int m, int n, int a, int b)
{
    int dem = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % a  == 0 || i % b == 0)
            dem++;
    }
    cout << dem << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m,n,a,b;
        cin >> m >> n >> a >> b;
        if (m > n)
            swap(m,n);
        chiaHet(m,n,a,b);
    }
}