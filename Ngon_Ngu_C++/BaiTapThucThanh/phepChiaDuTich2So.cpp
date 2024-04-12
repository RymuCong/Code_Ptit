#include <iostream>
using namespace std;

// Hàm nhân mô-đun
long long mulMod(long long a, long long b, long long c) {
    if (b == 0) return 0;
    long long res = mulMod(a, b / 2, c);
    if (b % 2 == 0) {
        return (2 * res) % c;
    } else {
        return (a + (2 * res) % c) % c;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << mulMod(a, b, c) << endl;
    }
    return 0;
}