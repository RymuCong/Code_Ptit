#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        stack < vector <int> > s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
            s.push(a);
        }
        while (!s.empty())
        {
            vector <int> b = s.top();
            s.pop();
            cout << "Buoc " << s.size() + 1 << ": ";
            for (int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
    }
}