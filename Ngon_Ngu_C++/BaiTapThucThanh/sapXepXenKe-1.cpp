#include <iostream>
#include <algorithm> // Để sử dụng hàm sort()
using namespace std;

void sapXep(int arr[], int n) {
    sort(arr, arr + n); // Sắp xếp mảng

    int result[n]; // Mảng để lưu kết quả

    int index = 0; // Chỉ số để chèn vào mảng kết quả
    for (int i = 0, j = n-1; i <= j; i++, j--) {
        if (index < n) {
            result[index++] = arr[j]; // Chèn phần tử lớn nhất
        }
        if (index < n) {
            result[index++] = arr[i]; // Chèn phần tử nhỏ nhất
        }
    }

    // In mảng kết quả
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; // Đọc số lượng bộ test
    while (t--) {
        int n;
        cin >> n; // Đọc số lượng phần tử của mảng
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Đọc các phần tử của mảng
        }
        sapXep(arr, n); // Sắp xếp và in mảng theo yêu cầu
    }
    return 0;
}