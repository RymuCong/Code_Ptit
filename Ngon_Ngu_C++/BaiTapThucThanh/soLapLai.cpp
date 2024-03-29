#include <iostream>
using namespace std;

// Cho ba số a, x, y. Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số P và Q, trong đó P lặp lại x lần số a và Q lặp lại y lần số a. 
// Ví dụ a =2, x = 3, y =2 thì P=222, Q=22.

long long UCLN(long long a, long long b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long a, x, y;
        cin >> a >> x >> y;
        long long ucln = UCLN(x, y);
        for (long long i = 0; i < ucln; i++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}