#include <bits/stdc++.h>
using namespace std;

void sinhLocPhat (int n)
{
    queue<string> q;
    stack <string> res;
    q.push("6");
    q.push("8");
    while (1)
    {
        string s = q.front();
        q.pop();
        if (s.size() > n)
            break;
        res.push(s);
        q.push(s + "6");
        q.push(s + "8");
    }
    cout << res.size() << endl;
    while (!res.empty())
    {
        cout << res.top() << " ";
        res.pop();
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