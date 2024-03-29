#include <iostream>
#include <cmath>
using namespace std;

// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các ước số nguyên tố của N. 
// Ví dụ N = 666 có các ước số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

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

int catSo(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int tmp = n % 10;
        sum += tmp;
        n /= 10;
    }
    return sum;
}

int soSmith(int n, int b[], int k)
{
    int tongBanDau = catSo(n);
    int tongUocSo = 0;
    int tmp = n;
    for (int i = 2; i <= sqrt(tmp); i++)
    {
        while (tmp % i == 0)
        {
            tongUocSo += catSo(i);
            tmp /= i;
        }
    }
    if (tmp != 1 && tmp != n)
    {
        tongUocSo += catSo(tmp);
    }
    return tongBanDau == tongUocSo && !checkSNT(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b[100], k = 0;
        cin >> n;
        if (soSmith(n, b, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}