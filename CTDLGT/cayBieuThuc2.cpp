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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> res(n);
        for (int i = n-1; i >= 0; i--)
        {
            if (v[i] == "+")
            {
                res[i] = res[2*i+1] + res[2*i+2];
            }
            else if (v[i] == "-")
            {
                res[i] = res[2*i+1] - res[2*i+2];
            }
            else if (v[i] == "*")
            {
                res[i] = res[2*i+1] * res[2*i+2];
            }
            else if (v[i] == "/")
            {
                res[i] = res[2*i+1] / res[2*i+2];
            }
            else
            {
                res[i] = stoi(v[i]);
            }
        }
        cout << res[0] << endl;
    }
}