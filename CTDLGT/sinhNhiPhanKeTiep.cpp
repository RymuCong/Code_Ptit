#include<bits/stdc++.h>
using namespace std;

string nhiPhanTiepTheo(string s) {
    int n = s.length(), i;
    for (i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            s[i] = '1';
            break;
        }
        else {
            s[i] = '0';
        }
    }
    if (i < 0) {
        s = '1' + s;
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string X;
        cin >> X;
        cout << nhiPhanTiepTheo(X) << endl;
    }
    return 0;
}
