#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    set <string> s;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string tmp;
        getline(cin,tmp);
        s.insert(tmp);
    }
    cout << s.size();
}