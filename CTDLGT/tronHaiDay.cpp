#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--)
   {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        vector<int> c;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
                c.push_back(a[i++]);
            else
                c.push_back(b[j++]);
        }
        while (i < n)
            c.push_back(a[i++]);
        while (j < m)
            c.push_back(b[j++]);
        for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
   }
   
}