#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> v;
    int x, t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "PRINT")
        {
            if (!v.empty())
                cout << v.back();
            else
                cout << "NONE";
            cout << endl;
        }
        else if (s == "POP")
        {
            if (!v.empty())
                v.pop_back();
        }            
    }
}