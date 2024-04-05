#include <iostream>
using namespace std;

int demCap(int A[], int n, int k) {
    int count = 0; // Biến để đếm số cặp có tổng bằng k
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i] + A[j] == k) {
                count++; // Tăng biến đếm nếu tìm thấy cặp có tổng bằng k
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t; // Đọc số lượng bộ test
    while (t--) {
        int n, k;
        cin >> n >> k; // Đọc số lượng phần tử của mảng và số k
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i]; // Đọc các phần tử của mảng
        }
        cout << demCap(A, n, k) << endl; // Tính và in ra kết quả
    }
    return 0;
}