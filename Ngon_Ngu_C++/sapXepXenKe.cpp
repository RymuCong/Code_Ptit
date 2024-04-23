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
        for (int i = 0; i < n; i++)
           cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> mix(n);
        int j = n-1;
        for (int i = 0; i < n; i += 2)
        {
            mix[i] = a[j--];
        }
        j = 0;
        for (int i = 1; i < n; i += 2)
        {
            mix[i] = a[j++];
        }
        for (int i = 0; i < n; i++)
            cout << mix[i] << " ";
        cout << endl;
    }
}