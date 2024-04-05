#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void sapXepChuSo(long long arr[], int n) {
    set<int> so; // Sử dụng set để tự động loại bỏ các chữ số trùng lặp và sắp xếp

    for (int i = 0; i < n; i++) {
        long long num = arr[i];
        while (num > 0) {
            int digit = num % 10; // Lấy chữ số cuối cùng của num
            so.insert(digit); // Thêm vào set
            num /= 10; // Loại bỏ chữ số cuối cùng
        }
    }

    // In các chữ số theo thứ tự tăng dần
    for (int digit : so) {
        cout << digit << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Đọc số lượng bộ test
    while (t--) {
        int n;
        cin >> n; // Đọc số lượng phần tử của mảng
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Đọc các phần tử của mảng
        }
        sapXepChuSo(arr, n); // Xử lý và in kết quả
    }
    return 0;
}