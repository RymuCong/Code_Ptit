#include <iostream>
#include <vector>
using namespace std;

int tongLonNhatCuaDayConTangDan(const vector<int>& A) {
    int n = A.size();
    vector<int> dp(n);

    // Khởi tạo dp[i] là A[i] vì dãy con tăng dần ít nhất bao gồm chính nó
    for (int i = 0; i < n; ++i) {
        dp[i] = A[i];
    }

    // Tính toán dp[i]
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (A[i] > A[j] && dp[i] < dp[j] + A[i]) {
                dp[i] = dp[j] + A[i];
            }
        }
    }

    // Tìm tổng lớn nhất trong dp[]
    int tongLonNhat = dp[0];
    for (int i = 1; i < n; ++i) {
        if (tongLonNhat < dp[i]) {
            tongLonNhat = dp[i];
        }
    }

    return tongLonNhat;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        cout << tongLonNhatCuaDayConTangDan(A) << endl;
    }
    return 0;
}