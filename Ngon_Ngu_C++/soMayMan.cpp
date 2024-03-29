#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.length();
        if (a[n-2] == '8' && a[n-1] == '6')
            cout << "1\n";
        else
            cout << "0\n";
    }
}