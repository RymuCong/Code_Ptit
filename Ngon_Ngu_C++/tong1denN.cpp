#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = (long long)((long long)(1 + n) * n) / 2;
        cout << sum << endl;
    }
}