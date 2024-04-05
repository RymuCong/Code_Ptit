#include <iostream>
#include <algorithm> // Để sử dụng hàm std::gcd
using namespace std;

struct PhanSo {
    long long tu, mau;
};

long long UCLN(long long a, long long b) {
    return b == 0 ? a : UCLN(b, a % b);
}

void rutGon(PhanSo &ps) {
    long long ucln = UCLN(abs(ps.tu), abs(ps.mau));
    ps.tu /= ucln;
    ps.mau /= ucln;
}

PhanSo congPhanSo(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo nhanPhanSo(PhanSo a, PhanSo b) {
    PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    rutGon(kq);
    return kq;
}

PhanSo binhPhuong(PhanSo a) {
    return nhanPhanSo(a, a);
}

void process(PhanSo A, PhanSo B) {
    PhanSo C = binhPhuong(congPhanSo(A, B));
    PhanSo D = nhanPhanSo(A, nhanPhanSo(B, C));
    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A, B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
    return 0;
}