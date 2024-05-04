#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s, email = "";
    vector <string> ss;
    while (cin >> s)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s[0] -= 32;
        ss.push_back(s);
    }
    for (int i = 0; i < ss.size() - 1; i++)
        if (i != ss.size() - 2)
            email += ss[i] + " ";
        else
            email += ss[i];
    string ten = ss.back();
    transform(ten.begin(),ten.end(),ten.begin(),::toupper);
    cout << email + ", " + ten;
}