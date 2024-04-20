#include <bits/stdc++.h>
using namespace std;

int demTu (string s)
{
    stringstream ss(s);
    string tu;
    int dem = 0;
    while (ss >> tu)
    {
        dem++;
    }
    return dem;
}

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << demTu(s) << endl;
    }
}