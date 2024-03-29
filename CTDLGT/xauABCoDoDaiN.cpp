#include <iostream>
using namespace std;

void quayLui (int a[], int n, int j)
{
    for (int i = 65; i <= 66; i++)
    {
        a[j] = i;
        if (j == n)
        {
            for (int k = 1; k <= n; k++)
                cout << (char) a[k];
            cout << " ";
        }
        else
            quayLui(a,n,j+1);
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[11];
        cin >> n;
        quayLui(a,n,1);
        cout << endl;
    }
}