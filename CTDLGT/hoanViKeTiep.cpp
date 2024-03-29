#include<bits/stdc++.h>
using namespace std;

void hoanViKeTiep(int N, int X[]) {
    int i = N - 2;
    while (i >= 0 && X[i] >= X[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = N - 1;
        while (X[j] <= X[i]) {
            j--;
        }
        swap(X[i], X[j]);
    }
    reverse(X + i + 1, X + N); // max 5 4 3 2 1 -> 1 2 3 4 5
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int X[N];
        for (int i = 0; i < N; i++) {
            cin >> X[i];
        }
        hoanViKeTiep(N, X);
        for (int i = 0; i < N; i++) {
            cout << X[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
