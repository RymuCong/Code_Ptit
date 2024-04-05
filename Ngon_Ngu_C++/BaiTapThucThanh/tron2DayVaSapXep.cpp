#include <iostream>
#include <vector>
#include <algorithm> // Để sử dụng hàm sort()

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> A(n), B(m);
        
        // Đọc mảng A
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        // Đọc mảng B
        for (int i = 0; i < m; i++) {
            cin >> B[i];
        }
        
        // Hợp nhất mảng A và B vào mảng C
        vector<int> C(A.begin(), A.end());
        C.insert(C.end(), B.begin(), B.end());
        
        // Sắp xếp mảng C
        sort(C.begin(), C.end());
        
        // In mảng C
        for (int i = 0; i < C.size(); i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }
    return 0;
}