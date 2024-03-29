#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long tich, tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tich = 1;
        for (int j = 1; j <= i; j++)
            tich *= j;
        tong += tich;
    }
    cout << tong << endl;
}