#include <iostream>
using namespace std;

class NhanVien {
private:
    string maNV;
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;

public:
    NhanVien() : maNV("00001") {}

    friend istream& operator>>(istream& in, NhanVien& nv) {
        getline(in, nv.hoTen);
        getline(in, nv.gioiTinh);
        getline(in, nv.ngaySinh);
        getline(in, nv.diaChi);
        getline(in, nv.maSoThue);
        getline(in, nv.ngayKyHopDong);
        return in;
    }

    friend ostream& operator<<(ostream& out, const NhanVien& nv) {
        out << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " " << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " " << nv.ngayKyHopDong;
        return out;
    }
};

int main() {
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
