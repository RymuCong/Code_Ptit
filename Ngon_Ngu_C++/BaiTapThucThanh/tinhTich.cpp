#include <iostream>
#include <algorithm>
using namespace std;

long long findMaxProduct(int A[], int n, int B[], int m) {
    // Tìm phần tử lớn nhất trong mảng A
    int maxA = *max_element(A, A + n);
    // Tìm phần tử nhỏ nhất trong mảng B
    int minB = *min_element(B, B + m);
    // Tính và trả về tích của chúng
    return (long long)maxA * minB;
}

int main() {
    int t;
    cin >> t; // Đọc số lượng bộ test
    while (t--) {
        int n, m;
        cin >> n >> m; // Đọc số lượng phần tử của mỗi mảng
        int A[n], B[m];
        for (int i = 0; i < n; i++) {
            cin >> A[i]; // Đọc các phần tử của mảng A
        }
        for (int i = 0; i < m; i++) {
            cin >> B[i]; // Đọc các phần tử của mảng B
        }
        cout << findMaxProduct(A, n, B, m) << endl; // Tính và in ra kết quả
    }
    return 0;
}