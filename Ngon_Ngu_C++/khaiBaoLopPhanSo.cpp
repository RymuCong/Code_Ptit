#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
public:
    long long tu, mau;

    long long gcd(long long a, long long b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    void rutgon ()
    {
        long long k = gcd(tu, mau);
        tu /= k;
        mau /= k;
    }

    PhanSo (long long a, long long b)
    {
        this->tu = a;
        this->mau = b;
    }

    friend istream &operator>> (istream &in, PhanSo &ps)
    {
        in >> ps.tu >> ps.mau;
        return in;
    }

    friend ostream &operator<< (ostream &out, PhanSo &ps)
    {
        out << ps.tu << "/" << ps.mau;
        return out;
    }
};

int main()
{
    PhanSo p (1,1);
    cin >> p;
    p.rutgon();
    cout << p;
}