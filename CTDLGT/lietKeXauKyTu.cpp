#include <bits/stdc++.h>
using namespace std;

string s;

void lietKe (char a, int k, int j)
{
    for (char i = s[j-1]; i <= a; i++)
    {
        s[j] = i;
        if (j == k)
        {
            for (int l = 1; l <= k; l++)
                cout << s[l];
            cout << endl;
        }
        else
            lietKe(a, k, j + 1);
    }
}

int main ()
{
    char a;
    cin >> a;
    int k;
    cin >> k;
    s[0] = 'A';
    lietKe(a, k, 1);
}