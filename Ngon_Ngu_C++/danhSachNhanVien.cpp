#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    public:
        string maNV;
        string hoTen;
        string ngaySinh;
        string gioiTinh;
        string diaChi;
        string maSoThue;
        string ngayKyHopDong;
};


void nhap(NhanVien &nv)
{
    cin.ignore();
    // cout << "Nhap ho ten nhan vien: ";
    getline(cin, nv.hoTen);
    // cout << "Nhap gioi tinh: ";
    getline(cin, nv.gioiTinh);
    // cout << "Nhap ngay sinh: ";
    getline(cin, nv.ngaySinh);
    // cout << "Nhap dia chi: ";
    getline(cin, nv.diaChi);
    // cout << "Nhap ma so thue: ";
    getline(cin, nv.maSoThue);
    // cout << "Nhap ngay ky hop dong: ";
    cin >> nv.ngayKyHopDong;
}

void inds (NhanVien nv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << setfill('0') << i+1 << " " << nv[i].hoTen << " " << nv[i].gioiTinh << " " << nv[i].ngaySinh << " " << 
        nv[i].diaChi << " " << nv[i].maSoThue << " " << nv[i].ngayKyHopDong << endl;
    }
}

int main ()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}