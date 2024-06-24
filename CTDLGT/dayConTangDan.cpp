#include <bits/stdc++.h>
using namespace std;

vector <string> res;
int a[25], x[25], n;

void dayConTangDan (int i, int last)
{
    for (int j = last + 1; j <= n; j++)
    {
        if (a[j] < x[i-1])
            continue;
        x[i] = a[j];
        if (i != 1)
        {
            string s = "";
            for (int k = 1; k <= i; k++)
                s += to_string(x[k]) + " ";
            res.push_back(s);
        }
        if (i < n)
            dayConTangDan(i+1, j);
    }
}

int main ()
{
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    dayConTangDan(1,0);
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
}