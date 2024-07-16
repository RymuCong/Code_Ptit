#include <bits/stdc++.h>
using namespace std;

int n, sum;
bool isHalf = false;
vector <int> a(105);

void bangNhau (int j, int total)
{
    if (j == n || isHalf || total == sum / 2)
    {
        if (total == sum / 2)
            isHalf = true;
        return;
    }
    if (total + a[j] <= sum / 2)
        bangNhau(j + 1, total + a[j]);
    bangNhau(j + 1, total);
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        isHalf = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        } 
        if (sum % 2 == 0)
            bangNhau(0, 0);
        if (isHalf)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}