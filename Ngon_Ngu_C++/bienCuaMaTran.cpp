#include <iostream>
using namespace std;

int a[100][100], n;

void in ()
{
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < n; j++)
            if (i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                cout << a[i][j] << " ";
            }
            else
                cout << "  ";
        cout << endl;
    }
       
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        in();
    }
}