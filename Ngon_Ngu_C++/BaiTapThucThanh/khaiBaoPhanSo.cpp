#include <iostream>
using namespace std;

class PhanSo {
private:
    long long tuSo, mauSo;

    long long UCLN(long long a, long long b) {
        if (b == 0) return a;
        return UCLN(b, a % b);
    }

public:
    // H�m kh?i t?o
    PhanSo(long long tuSo, long long mauSo) : tuSo(tuSo), mauSo(mauSo) {}

    // H�m r�t g?n ph�n s?
    void rutgon() {
        long long ucln = UCLN(tuSo, mauSo);
        tuSo /= ucln;
        mauSo /= ucln;
    }

    friend istream& operator>>(istream& in, PhanSo& p) {
        in >> p.tuSo >> p.mauSo;
        return in;
    }

    friend ostream& operator<<(ostream& out, const PhanSo& p) {
        out << p.tuSo << "/" << p.mauSo;
        return out;
    }
};

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
