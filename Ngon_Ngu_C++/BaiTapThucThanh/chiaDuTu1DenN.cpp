#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        // Tính tổng S
        long long tongChuoiHoanChinh = (K * (K - 1) / 2) * (N / K);
        long long soDu = N % K;
        long long tongSoDu = (soDu * (soDu + 1) / 2);
        long long S = tongChuoiHoanChinh + tongSoDu;
        cout << S << endl;
    }
    return 0;
}