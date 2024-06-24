#include <bits/stdc++.h>
using namespace std;

int check(vector<int> a)
{
    int n = a.size() - 1;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) <= 1)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        do
        {
            if (check(a))
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i];
                }
                cout << endl;
            }
        } while (next_permutation(a.begin() + 1, a.end()));
    }
}