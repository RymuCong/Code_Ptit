#include <bits/stdc++.h>
using namespace std;

int vis[100] = {0}, a[100] = {0}, n, dem = 0;

void quayLui (int i, int cc[], int cp[])
{
    for (int j = 1; j <= n; j++)
    {
        if (!vis[j] && !cc[i-j+n] && !cp[i+j-1])
        {
            a[i] = j;
            vis[j] = 1;
            cc[i-j+n] = 1;
            cp[i+j-1] = 1;
            if (i == n)
            {
                dem++;
            }
            else
            {
                quayLui(i+1, cc, cp);
            }
            vis[j] = 0;
            cc[i-j+n] = 0;
            cp[i+j-1] = 0;
        }
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cheoChinh[2*n+1] = {0};
        int cheoPhu[2*n+1] = {0};
        quayLui(1, cheoChinh, cheoPhu);
        cout << dem << endl;
        dem = 0;
    }
}