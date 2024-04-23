#include <bits/stdc++.h>
using namespace std;

void bieuThuc()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != ')')
            st.push(s[i]);
        else
        {
            bool check = false;
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    check = true;
                if (c == '(')
                    break;
            }
            if (!check)
            {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        bieuThuc();
        cout << endl;
    }
    return 0;
}
