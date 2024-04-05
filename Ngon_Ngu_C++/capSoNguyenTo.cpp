#include <iostream>
using namespace std;

int checkSNT (int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0)
            return 0;
    return 1;
}

void capNguyenTo (int n)
{
    for (int i = 2; i <= n; i++)
        if (checkSNT(i) && checkSNT(n-i))
        {
            cout << i << " " << n - i << endl;
            return;
        }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        capNguyenTo(n);
    }
}