#include <iostream>
#include <cmath>
using namespace std;

// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số. Ví dụ n=100, ta có các số 4.
// Note :  1 số là số có 3 ước nếu căn bậc 2 của nó là 1 số SNT
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
        long long n, dem = 0;
        cin >> n;
        for (long long i = 0; i <= sqrt(n); i++)
            if (checkSNT(i))
                dem++;
        cout << dem << endl;
    }
    return 0;
}
