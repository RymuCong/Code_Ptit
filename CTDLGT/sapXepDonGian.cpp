#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, dem = 0;
    cin >> n;
    vector<int> a(n+1);
    map<int, int> b;
    // 6 1 2 4 3 5
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]] = b[a[i] - 1] + 1;
        dem = max(dem, b[a[i]]);
    }
        
    cout << n - dem << endl;
}