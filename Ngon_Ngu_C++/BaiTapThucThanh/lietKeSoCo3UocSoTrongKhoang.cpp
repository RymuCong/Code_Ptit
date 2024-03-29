#include <iostream>
#include <cmath>
using namespace std;

// Cho hai số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng [L, R]. 
// Ví dụ L =1, R =10, ta có kết quả là 2 vì chỉ có số 3 và 9 là có đúng 3 ước số.

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
        long long l, r, demL = 0, demR = 0;
        cin >> l >> r;
        for (long long i = 1; i <= sqrt(r); i++)
            if (checkSNT(i))
                demR++;
        for (long long i = 1; i <= sqrt(l); i++)
            if (checkSNT(i))
                demL++;
        cout << demR - demL << endl;
    }
    return 0;
}
