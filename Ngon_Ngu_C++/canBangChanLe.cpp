#include <iostream>
#include <math.h>
using namespace std;

int catSo(int n)
{
    int le = 0, chan = 0;
    while (n > 0)
    {
        int k = n % 10;
        if (k % 2 == 1)
            le++;
        else
            chan++;
        n /= 10;
    }
    return chan == le;
}

int main()
{
    int n, dem = 0;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (catSo(i))
        {
            cout << i << " ";
            dem++;
        }
        if (dem == 10)
        {
            cout << endl;
            dem = 0;
        }
    }
}