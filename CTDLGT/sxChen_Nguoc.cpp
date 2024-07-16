#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <int> a(n);
    stack < vector <int> > s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    s.push(a);
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = a[i];
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        s.push(a);
    }
    while (!s.empty())
    {
        vector <int> b = s.top();
        cout << "Buoc " << s.size() - 1 << ": ";
        for (int i = 0; i < s.size(); i++)
            cout << b[i] << " ";
        cout << endl;
        s.pop();
    }
}