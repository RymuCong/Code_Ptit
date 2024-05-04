#include <bits/stdc++.h>
using namespace std;

void catSo(int n, string s)
{
    int lonNhat[10] = {0};
    for (auto x : s)
    {
        if (x == '2')
            lonNhat[2]++;
        else if (x == '3')
            lonNhat[3]++;
        else if (x == '4')
        {
            lonNhat[3]++;
            lonNhat[2] += 2;
        }
        else if (x == '5')
            lonNhat[5]++;
        else if (x == '6')
        {
            lonNhat[5]++;
            lonNhat[3]++;
        }
        else if (x == '7')
            lonNhat[7]++;
        else if (x == '8')
        {
            lonNhat[7]++;
            lonNhat[2] += 3;
        }
        else if (x == '9')
        {
            lonNhat[7]++;
            lonNhat[3] += 2;
            lonNhat[2]++;
        }
    }
    for (int i = 9; i >= 2; --i)
    {
        for (int j = 1; j <= lonNhat[i]; ++j)
            cout << i;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        catSo(n, s);
    }
}