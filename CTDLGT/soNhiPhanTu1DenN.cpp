#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    while (n--)
    {
        string s = q.front();
        q.pop();
        cout << s << " ";

        q.push(s + "0");
        q.push(s + "1");
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}