#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s, k;
    getline(cin,s);
    getline(cin,k);
    int index = s.find(k);
    for (int i = 0; i <= s.length(); i++)
        if (i < index || i > index+k.length())
            cout << s[i];
}