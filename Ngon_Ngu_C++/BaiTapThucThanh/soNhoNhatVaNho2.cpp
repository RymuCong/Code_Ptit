#include <iostream>
#include <limits.h> // Để sử dụng INT_MAX
using namespace std;

void timHaiSoNhoNhat(int A[], int n) {
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (A[i] < min1) {
            min2 = min1;
            min1 = A[i];
        } else if (A[i] < min2 && A[i] != min1) {
            min2 = A[i];
        }
    }
    if (min2 == INT_MAX) {
        cout << min1 << " " << -1 << endl;
    } else {
        cout << min1 << " " << min2 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        timHaiSoNhoNhat(A, n);
    }
    return 0;
}