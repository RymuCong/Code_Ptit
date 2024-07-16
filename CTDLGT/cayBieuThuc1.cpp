#include <bits/stdc++.h>
using namespace std;

void trungto(string s)
{
    stack<string> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string tmp = b + s[i] + a;
            st.push(tmp);
        }
        else
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        trungto(s);
    }
}