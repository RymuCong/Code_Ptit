#include <iostream>
using namespace std;

struct PhanSo {
    long long tuSo, mauSo;
};

// Hàm nhập phân số
void nhap(PhanSo &p) {
    cin >> p.tuSo >> p.mauSo;
}

// Hàm tìm ước chung lớn nhất
long long UCLN(long long a, long long b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

// Hàm rút gọn phân số
void rutgon(PhanSo &p) {
    long long ucln = UCLN(p.tuSo, p.mauSo);
    p.tuSo /= ucln;
    p.mauSo /= ucln;
}

// Hàm in phân số
void in(const PhanSo &p) {
    cout << p.tuSo << "/" << p.mauSo;
}

int main() {
    PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}