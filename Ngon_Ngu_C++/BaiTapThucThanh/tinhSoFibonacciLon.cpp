#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

long long fibonacci(int n) {
    vector<long long> f(n + 1, 0);
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + f[i - 2]) % MOD;
    }
    return f[n];
}

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << fibonacci(n) << endl;
    }
    return 0;
}
