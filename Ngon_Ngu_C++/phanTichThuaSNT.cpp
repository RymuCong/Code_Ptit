#include <iostream>
#include <math.h>
using namespace std;

void phanTichSnt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        int dem = 0;
        while (n % i == 0) {
            ++dem;
            n /= i;
        }
        if (dem != 0) {
            cout << i << " " << dem << " ";
        }
    }
    if (n > 1) {
        cout << n << " " << 1 << " ";
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
        phanTichSnt(n);
        cout << endl;
    }
}