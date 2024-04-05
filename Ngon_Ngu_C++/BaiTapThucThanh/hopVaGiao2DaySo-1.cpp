#include <iostream>
#include <vector>
using namespace std;

void timHopVaGiao(int A[], int n, int B[], int m) {
    vector<int> hop, giao;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            hop.push_back(A[i]);
            i++;
        } else if (A[i] > B[j]) {
            hop.push_back(B[j]);
            j++;
        } else {
            hop.push_back(A[i]);
            giao.push_back(A[i]);
            i++;
            j++;
        }
    }

    // Thêm phần còn lại của mảng A[] hoặc B[] vào mảng hợp
    while (i < n) {
        hop.push_back(A[i]);
        i++;
    }
    while (j < m) {
        hop.push_back(B[j]);
        j++;
    }

    // In mảng hợp
    for (int k = 0; k < hop.size(); k++) {
        if (k == 0 || hop[k] != hop[k - 1]) { // Loại bỏ các phần tử trùng lặp
            cout << hop[k] << " ";
        }
    }
    cout << endl;

    // In mảng giao
    for (int k = 0; k < giao.size(); k++) {
        cout << giao[k] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int A[n], B[m];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int j = 0; j < m; j++) {
            cin >> B[j];
        }
        timHopVaGiao(A, n, B, m);
    }
    return 0;
}