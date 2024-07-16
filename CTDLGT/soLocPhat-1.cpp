#include <bits/stdc++.h>
using namespace std;

void sinhLocPhat (int n)
{
    queue<string> q;
    stack <string> st;
    q.push("6");
    q.push("8");
    while (1)
    {
        string s = q.front();
        q.pop();
        if (s.size() > n)
            break;
        st.push(s);
        q.push(s + "6");
        q.push(s + "8");
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        sinhLocPhat(n);
    }
}