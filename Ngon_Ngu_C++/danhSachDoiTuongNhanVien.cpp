#include <bits/stdc++.h>
using namespace std;

int demsv = 1;

class NhanVien
{
public:
    int maSV;
    string gioiTinh;
    string tenSV;
    string ngaySinh;
    string maSoThue;
    string diaChi;
    string ngayKyHopDong;

    NhanVien() {}

    friend ostream &operator<<(ostream &os, const NhanVien &sv);
    friend istream &operator>>(istream &is, NhanVien &sv);

    void chuanHoaNgaySinh()
    {
        if (ngaySinh[1] == '/')
        {
            ngaySinh.insert(0, "0");
        }
        if (ngaySinh[4] == '/')
        {
            ngaySinh.insert(3, "0");
        }
    }

    void chuanHoaNgayKyHopDong()
    {
        if (ngayKyHopDong[1] == '/')
        {
            ngayKyHopDong.insert(0, "0");
        }
        if (ngayKyHopDong[4] == '/')
        {
            ngayKyHopDong.insert(3, "0");
        }
    }

};

ostream &operator<<(ostream &os, NhanVien &sv)
{
    os << setw(5) << setfill('0') << sv.maSV << " " << sv.tenSV << " " << sv.gioiTinh << " " << sv.ngaySinh << " " << sv.diaChi << " " << sv.maSoThue << " " << sv.ngayKyHopDong << endl;
    return os;
}

istream &operator>>(istream &is, NhanVien &sv)
{
    scanf("\n");
    getline(is, sv.tenSV);
    getline(is, sv.gioiTinh);
    getline(is, sv.ngaySinh);
    getline(is, sv.diaChi);
    getline(is, sv.maSoThue);
    getline(is, sv.ngayKyHopDong);
    sv.maSV = demsv++;
    sv.chuanHoaNgaySinh();
    sv.chuanHoaNgayKyHopDong();
    return is;
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}