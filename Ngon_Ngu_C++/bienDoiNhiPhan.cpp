#include <iostream>
using namespace std;

int a[100][100], n, m, b[100][100];

void BienDoi ()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == 1)
            {
                for (int k = 0; k < n; k++)
                    b[i][k] = 1;
                for (int k = 0; k < m; k++)
                    b[k][j] = 1;
            }
}

void in ()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
        
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        BienDoi();
        in();
    }
}