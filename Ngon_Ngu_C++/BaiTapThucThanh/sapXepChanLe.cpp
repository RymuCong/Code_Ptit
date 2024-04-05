#include <iostream>
#include <algorithm>
using namespace std;

void sapXepChanLe(int A[], int n) {
    // Bước 1: Sắp xếp mảng
    sort(A, A + n);

    // Bước 2: Điều chỉnh các phần tử để đáp ứng yêu cầu
    for (int i = 1; i < n - 1; i += 2) {
        // Đổi chỗ các phần tử ở vị trí lẻ và phần tử kế tiếp của nó
        swap(A[i], A[i + 1]);
    }

    // Bước 3: In mảng sau khi đã sắp xếp
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sapXepChanLe(A, n);
    }
    return 0;
}