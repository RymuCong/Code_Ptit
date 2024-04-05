#include <iostream>
#include <cmath>
using namespace std;

int checkSNT(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i*i <= n; i++)
            if (checkSNT(i))
                cout << i*i << " ";
        cout << endl;
    }
    return 0;
}
