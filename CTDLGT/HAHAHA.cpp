#include <iostream>
using namespace std;

void quayLui (int a[], int n, int j)
{
    for (int i = 65; i <= 72; i+=7)
    {
        a[j] = i;
        if (a[j-1] == 72 && a[j] == 72)
            continue;
        else
        {
            if (j == n - 1)
            {
                cout << "H";
                for (int k = 2; k <= n - 1; k++)
                    cout << (char) a[k];
                cout << "A";
                cout << endl;         
            }
            else
                quayLui(a,n,j+1);
        }
        
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k, a[20] = {0};
        a[1] = 72;
        cin >> n;
        if (n == 2)
            cout << "HA" << endl;
        else
            quayLui(a,n,2);
    }
}