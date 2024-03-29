#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        long long du = 0;
        for (int i = 0; i < n; i++) {
            int heSo;
            cin >> heSo;
            du = (du * x + heSo) % MOD;
        }
        cout << du << endl;
    }
    return 0;
}