#include <bits/stdc++.h>
using namespace std;

void in(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        cout << "Buoc " << i + 1 << ": ";
        in(a);
    }
}