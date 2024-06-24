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

    for (int i = 1; i <= v; i++)
    {
        for (int j = 0; j < ke[i].size(); j++)
        {
            if (i < ke[i][j])
                cout << i << " " << ke[i][j] << endl;
        }
    }
}