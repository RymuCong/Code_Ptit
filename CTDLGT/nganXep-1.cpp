#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> v;
    int x;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "show")
        {
            if (!v.empty())
                for (int i = 0; i < v.size(); i++)
                    cout << v[i] << " ";
            else
                cout << "empty";
            cout << endl;
        }
        else if (s == "pop")
        {
            if (!v.empty())
                v.pop_back();
        }            
    }
}