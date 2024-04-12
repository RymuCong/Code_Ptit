#include <iostream>
#include <vector>
using namespace std;

// Hàm tính giai thừa
long long giaiThua(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

// Hàm tính tổ hợp C(n, k)
long long toHop(int n, int k) {
    return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

// Hàm tính số xâu ký tự thỏa mãn
long long demXauKyTu(int n, int r, int b, int g) {
    long long tong = 0;
    // Tính tổng số cách cho tất cả các giá trị có thể của r, b, và g
    for (int i = r; i <= n - b - g; ++i) {
        for (int j = b; j <= n - i - g; ++j) {
            int k = n - i - j;
            tong += toHop(n, i) * toHop(n - i, j) * toHop(n - i - j, k);
        }
    }
    return tong;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        cout << demXauKyTu(n, r, b, g) << endl;
    }
    return 0;
}