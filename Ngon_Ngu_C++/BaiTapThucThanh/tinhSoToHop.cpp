#include <iostream>
using namespace std;

const int P = 1e9 + 7;

// Hàm tính x^y % P
long long powMod(long long x, long long y, int P) {
    long long res = 1;
    x = x % P;
    while (y > 0) {
        if (y & 1) res = (res * x) % P;
        y = y >> 1; // y = y/2
        x = (x * x) % P;
    }
    return res;
}

// Hàm tính nghịch đảo modulo của a mod P
long long daoMod(long long a, int P) {
    return powMod(a, P - 2, P);
}

// Hàm tính n! % P
long long giaiThua(int n, int P) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * i) % P;
    }
    return res;
}

// Hàm tính C(n, r) % P
long long C(int n, int r, int P) {
    if (r == 0) return 1;
    long long nFact = giaiThua(n, P);
    long long rFact = giaiThua(r, P);
    long long nMinusRFact = giaiThua(n - r, P);
    return (nFact * daoMod(rFact, P) % P * daoMod(nMinusRFact, P) % P) % P;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, r;
        cin >> n >> r;
        cout << C(n, r, P) << endl;
    }
    return 0;
}