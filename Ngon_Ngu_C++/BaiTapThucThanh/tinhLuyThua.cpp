#include <iostream>
using namespace std;

// Hàm tính (x^y) % p sử dụng phương pháp lũy thừa bằng cách bình phương
long long modPow(long long x, long long y, long long p) {
    long long res = 1; // Khởi tạo kết quả
    x = x % p; // Cập nhật x nếu x lớn hơn hoặc bằng p
    if (x == 0) return 0; // Nếu x mod p = 0 thì trả về 0

    while (y > 0) {
        // Nếu y là số lẻ, nhân x với kết quả
        if (y & 1)
            res = (res * x) % p;

        // y phải là số chẵn bây giờ
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long x, y, p;
        cin >> x >> y >> p;
        cout << modPow(x, y, p) << endl;
    }
    return 0;
}