#include <iostream>
#include <vector>
using namespace std;

void sapXepMang(int A[], int n) {
    // Bước 1: Nhân đôi các phần tử hợp lệ liên tiếp và thiết lập phần tử kế tiếp bằng 0
    for (int i = 0; i < n - 1; i++) {
        if (A[i] != 0 && A[i] == A[i + 1]) {
            A[i] *= 2;
            A[i + 1] = 0;
            i++; // Bỏ qua phần tử kế tiếp đã được thiết lập bằng 0
        }
    }

    // Bước 2: Di chuyển các số không hợp lệ về cuối mảng
    vector<int> temp; // Mảng tạm để lưu các số hợp lệ
    int countZero = 0; // Đếm số lượng số không hợp lệ
    for (int i = 0; i < n; i++) {
        if (A[i] != 0) {
            temp.push_back(A[i]);
        } else {
            countZero++;
        }
    }

    // Điền các số hợp lệ vào mảng A
    for (int i = 0; i < temp.size(); i++) {
        A[i] = temp[i];
    }

    // Điền các số không hợp lệ vào cuối mảng A
    for (int i = temp.size(); i < n; i++) {
        A[i] = 0;
    }

    // In mảng sau khi đã sắp xếp
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
        sapXepMang(A, n);
    }
    return 0;
}