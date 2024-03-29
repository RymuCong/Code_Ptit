#include <iostream>
using namespace std;

int soSphenic(int n)
{
    int dem = 0;
    int last = -1;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            if (i == last)
                return false;
            last = i;
            dem++;
            n /= i;
        }
    }
    if (n > 1)
    {
        if (n == last)
            return false;
        dem++;
    }
    return dem == 3;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (soSphenic(n))
            cout << "1\n";
        else
            cout << "0\n";
    }
}