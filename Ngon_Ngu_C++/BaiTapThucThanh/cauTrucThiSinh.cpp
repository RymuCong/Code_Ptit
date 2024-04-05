#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Khai báo cấu trúc ThiSinh
struct ThiSinh {
    string hoTen;
    string ngaySinh;
    float diem1, diem2, diem3, tongDiem;
};

// Hàm nhập thông tin thí sinh
void nhap(ThiSinh &A) {
    getline(cin, A.hoTen); // Đọc họ tên có khoảng trắng
    getline(cin, A.ngaySinh); // Đọc ngày sinh
    cin >> A.diem1 >> A.diem2 >> A.diem3;
    A.tongDiem = A.diem1 + A.diem2 + A.diem3; // Tính tổng điểm
}

// Hàm in thông tin thí sinh
void in(const ThiSinh &A) {
    cout << A.hoTen << " " << A.ngaySinh << " " << fixed << setprecision(1) << A.tongDiem;
}

int main() {
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}