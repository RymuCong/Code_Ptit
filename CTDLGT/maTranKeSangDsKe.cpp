#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int v;
    cin >> v;
    int a[v+1][v+1];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cin >> a[i][j];
        }
    }
    vector< vector <int> > ke(v+1);
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (a[i][j] == 1)
                ke[i].push_back(j);
        }
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            cout << ke[i][j] << " ";
        }
        cout << endl;
    }
}