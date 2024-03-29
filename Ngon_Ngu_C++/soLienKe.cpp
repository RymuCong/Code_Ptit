#include <iostream>
#include <math.h>
using namespace std;

int tachSo (string a)
{
    for (int i = 0; i < a.length() - 1; i++)
    {
        if (abs((a[i] - a[i+1])) != 1)
            return 0;
    }
    return 1;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if(tachSo(a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}