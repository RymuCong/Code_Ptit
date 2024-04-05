#include <iostream>
#include <vector>
using namespace std;

int demDoiChoToiThieu(int A[], int n, int k) {
    int count = 0; // Đếm số lượng phần tử nhỏ hơn hoặc bằng k
    for (int i = 0; i < n; ++i) {
        if (A[i] <= k) ++count;
    }

    int bad = 0; // Đếm số lượng phần tử lớn hơn k trong vùng đầu tiên
    for (int i = 0; i < count; ++i) {
        if (A[i] > k) ++bad;
    }

    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j) {
        // Nếu phần tử rời khỏi vùng lớn hơn k, giảm bad
        if (A[i] > k) --bad;
        // Nếu phần tử mới vào vùng lớn hơn k, tăng bad
        if (A[j] > k) ++bad;

        ans = min(ans, bad); // Cập nhật số lần đổi chỗ tối thiểu
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cout << demDoiChoToiThieu(A, n, k) << endl;
    }
    return 0;
}