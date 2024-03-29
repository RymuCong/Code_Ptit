#include <iostream>
using namespace std;

int catChuoi(int n)
{
    do
    {
        int k = n % 10;
        if (k != 0 && k != 6 && k != 8)
            return 0;
        n /= 10;
    } while (n > 0);
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (catChuoi(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}