#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        // Tính tổng S
        long long tongChuoiHoanChinh = (K * (K - 1) / 2) * (N / K); // lấy phần nguyên N/k lần nhân với tổng phần dư của n%k là từ 1 đến k-1
        long long soDu = N % K;
        long long tongSoDu = (soDu * (soDu + 1) / 2);
        long long S = tongChuoiHoanChinh + tongSoDu;
        if (S == K)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}