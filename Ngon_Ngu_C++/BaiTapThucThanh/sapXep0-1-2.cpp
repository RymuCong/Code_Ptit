#include <iostream>
using namespace std;

void sort012(int a[], int n) {
    int count[3] = {0}; // Khởi tạo mảng đếm với 0
    for(int i = 0; i < n; i++) {
        count[a[i]]++; // Đếm số lượng 0, 1, 2
    }

    int index = 0;
    for(int i = 0; i < 3; i++) {
        while(count[i] > 0) {
            a[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int t;
    cin >> t; // Đọc số lượng bộ test
    while(t--) {
        int n;
        cin >> n; // Đọc số lượng phần tử của mảng
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i]; // Đọc các phần tử của mảng
        }
        sort012(a, n); // Sắp xếp mảng
        for(int i = 0; i < n; i++) {
            cout << a[i] << " "; // In mảng đã sắp xếp
        }
        cout << endl;
    }
    return 0;
}