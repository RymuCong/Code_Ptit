#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isSwap = false;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                isSwap = true;
                swap(a[j], a[j + 1]);
            }
        if (isSwap)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int j = 0; j < n; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
}