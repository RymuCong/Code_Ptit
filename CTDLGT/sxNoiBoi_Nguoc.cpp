#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        stack<vector<int>> s;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n - 1; i++)
        {
            bool isSwap = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    isSwap = true;
                }
            }
            if (isSwap)
            {
                s.push(a);
            }
        }
        while (!s.empty())
        {
            vector<int> b = s.top();
            cout << "Buoc " << s.size() << ": ";
            for (int i = 0; i < b.size(); i++)
                cout << b[i] << " ";
            cout << endl;
            s.pop();
        }
    }
}