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
    PhanSo(long long tuSo = 0, long long mauSo = 1) : tuSo(tuSo), mauSo(mauSo) {}

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

    PhanSo operator+(const PhanSo& other) {
        PhanSo tong;
        tong.tuSo = this->tuSo * other.mauSo + this->mauSo * other.tuSo;
        tong.mauSo = this->mauSo * other.mauSo;
        tong.rutgon(); 
        return tong;
    }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    PhanSo tong = p + q;
    tong.rutgon(); 
    cout << tong;
    return 0;
}
