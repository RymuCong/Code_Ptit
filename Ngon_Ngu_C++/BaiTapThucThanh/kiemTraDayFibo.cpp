#include <iostream>
using namespace std;

int taoFibo(int fib[]) {
    fib[0] = 0;
    fib[1] = 1;
    int dau = fib[0] + fib[1];
    int dem = 2;
    while (dau <= 1000) {
        fib[dem++] = dau;
        dau = fib[dem - 1] + fib[dem - 2];
    }
    return dem; 
}

bool checkFibo(int fib[], int count, int x) {
    for (int i = 0; i < count; i++) {
        if (fib[i] == x) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    int fib[20]; 
    int count = taoFibo(fib);
    while (T--) {
        int n;
        cin >> n;
        int A[100];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++) {
            if (checkFibo(fib, count, A[i])) {
                cout << A[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}