#include <iostream>
using namespace std;

int main ()
{
    int n, soDong = 0;
    cin >> n;
    int a[1000][3];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                dem++;
        }
        if (dem >= 2)
            soDong++;
    }
    cout << soDong;   
}