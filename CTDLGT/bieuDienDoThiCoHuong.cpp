#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v,e;
        cin >> v >> e;
        vector< vector <int> > canh(v+1);
        for (int i = 0; i < e; i++)
        {
            int a,b;
            cin >> a >> b;
            canh[a].push_back(b);
        }

        for (int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < canh[i].size(); j++)
            {
                cout << canh[i][j] << " ";
            }
            cout << endl;
        }
    }
}