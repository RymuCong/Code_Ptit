#include <bits/stdc++.h>
using namespace std;

int find (int n, int a[], int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

void duyetSau (int n, int truoc[], int giua[])
{
    int index = find(n, giua, truoc[0]);
    if (index != 0)
    {
        duyetSau(index, truoc + 1, giua);
    }
    if (index != n - 1)
    {
        duyetSau(n - index - 1, truoc + index + 1, giua + index + 1);
    }
    cout << truoc[0] << " ";
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int truoc[n], giua[n];
        for (int i = 0; i < n; i++)
        {
            cin >> giua[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> truoc[i];
        }
        duyetSau(n, truoc, giua);
        cout << endl;
    }
}