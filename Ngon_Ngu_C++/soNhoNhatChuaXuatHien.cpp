#include <bits/stdc++.h>
using namespace std;

void soNhoNhat()
{
    int n;
    cin >> n;
    int a[n], visited[100001] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            visited[a[i]] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!visited[i])
        {
            cout << i << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        soNhoNhat();
    }
}