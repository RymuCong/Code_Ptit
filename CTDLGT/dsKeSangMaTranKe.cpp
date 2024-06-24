#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int v;
    cin >> v;
    cin.ignore();
    vector< vector <int> > ke(v+1);
    for (int i = 1; i <= v; i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        int x;
        while (ss >> x)
        {
            ke[i].push_back(x);
        }
    }

    int mtke[v+1][v+1];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            mtke[i][j] = 0;
        }
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            mtke[i][ke[i][j]] = 1;
        }
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << mtke[i][j] << " ";
        }
        cout << endl;
    }
       
}