#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> v;
    while (cin >> s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
    }
    string email = v.back();
    for (int i = 0; i < v.size() - 1; ++i)
        email += v[i][0];
    email += "@ptit.edu.vn";
    cout << email;
    return 0;
}