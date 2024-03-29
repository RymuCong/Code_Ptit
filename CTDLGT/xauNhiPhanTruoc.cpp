#include<bits/stdc++.h>
using namespace std;

string xauNhiPhanTruoc(string s) {
    int n = s.length();
    int i;
    for (i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            s[i] = '0';
            break;
        }
        else {
            s[i] = '1';
        }
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string X;
        cin >> X;
        cout << xauNhiPhanTruoc(X) << endl;
    }
    return 0;
}
