#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct MatHang {
    int maMH;
    string tenMH;
    string nhomHang;
    float giaMua;
    float giaBan;
    float loiNhuan;

    // Hàm khởi tạo
    MatHang(int ma, string ten, string nhom, float mua, float ban) : maMH(ma), tenMH(ten), nhomHang(nhom), giaMua(mua), giaBan(ban) {
        loiNhuan = giaBan - giaMua;
    }
};

// Hàm nhập thông tin mặt hàng
void nhapThongTinMH(vector<MatHang> &dsMH) {
    int soLuongMH;
    cin >> soLuongMH;
    cin.ignore();
    for (int i = 1; i <= soLuongMH; i++) {
        string ten, nhom;
        float giaMua, giaBan;
        getline(cin, ten);
        getline(cin, nhom);
        cin >> giaMua >> giaBan;
        cin.ignore();
        dsMH.push_back(MatHang(i, ten, nhom, giaMua, giaBan));
    }
}

// Hàm sắp xếp
void sapXepMH(vector<MatHang> &dsMH) {
    sort(dsMH.begin(), dsMH.end(), [](const MatHang &a, const MatHang &b) {
        return a.loiNhuan > b.loiNhuan;
    });
}

// Hàm in danh sách mặt hàng
void inDanhSachMH(const vector<MatHang> &dsMH) {
    for (const auto &mh : dsMH) {
        cout << mh.maMH << " " << mh.tenMH << " " << mh.nhomHang << " " << fixed << setprecision(2) << mh.loiNhuan << endl;
    }
}

int main() {
    vector<MatHang> dsMH;
    nhapThongTinMH(dsMH);
    sapXepMH(dsMH);
    inDanhSachMH(dsMH);
    return 0;
}