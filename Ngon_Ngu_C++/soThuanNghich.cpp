#include <iostream>
using namespace std;

int catChuoi(char a[])
{
    int i = 0, j = 0;
    while (a[i] >= 48 && a[i] <= 57)
        i++;
    while (j <= i / 2)
    {
        if (a[i - j - 1] != a[j])
            return 0;
        j++;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n[20];
        cin >> n;
        if (catChuoi(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}