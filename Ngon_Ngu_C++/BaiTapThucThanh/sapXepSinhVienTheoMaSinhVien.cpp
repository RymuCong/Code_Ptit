#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SinhVien {
public:
    string maSV, hoTen, lop, email;

    SinhVien(string maSV, string hoTen, string lop, string email) {
        this->maSV = maSV;
        this->hoTen = hoTen;
        this->lop = lop;
        this->email = email;
    }

    // Hàm so sánh để sắp xếp theo mã sinh viên
    static bool soSanh(const SinhVien& sv1, const SinhVien& sv2) {
        return sv1.maSV < sv2.maSV;
    }
};

int main() {
    vector<SinhVien> danhSachSV;
    for (int i = 0; i < 4; i++) {
        string maSV, hoTen, lop, email;
        cin >> maSV;
        cin.ignore(); // Loại bỏ ký tự xuống dòng thừa
        getline(cin, hoTen);
        cin >> lop >> email;
        danhSachSV.push_back(SinhVien(maSV, hoTen, lop, email));
    }

    // Sắp xếp danh sách sinh viên theo mã sinh viên
    sort(danhSachSV.begin(), danhSachSV.end(), SinhVien::soSanh);

    // In danh sách sinh viên
    for (const SinhVien& sv : danhSachSV) {
        cout << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.email << endl;
    }

    return 0;
}
