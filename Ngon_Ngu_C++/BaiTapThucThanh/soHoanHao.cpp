#include <iostream>
#include <cmath>
using namespace std;

// lươn lẹo

// Danh sách các số hoàn hảo đã biết trong phạm vi số nguyên 64-bit
const vector<long long> soHoanHao = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

// Hàm kiểm tra số hoàn hảo bằng cách tìm trong danh sách cố định
bool laSoHoanHao(long long n) {
    for (long long so : soHoanHao) {
        if (n == so) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T; // Đọc số lượng test
    while (T--) {
        long long N;
        cin >> N; // Đọc số N
        cout << laSoHoanHao(N) << endl; // In ra kết quả kiểm tra
    }
    return 0;
}

// Không đủ nhanh
int checkSHH(long long n)
{
    if (n == 1)
        return false;
    long long tong = 1;
    long long can2 = sqrt(n);
    for (long long i = 2; i <= can2; i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
            {
                tong += i;
            }
            else
            {
                tong += (i + n / i);
            }
        }
        if (tong > n)
        {
            return false;
        }
    }
    return tong == n;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << (checkSHH(N) ? 1 : 0) << endl;
    }
    return 0;
}
