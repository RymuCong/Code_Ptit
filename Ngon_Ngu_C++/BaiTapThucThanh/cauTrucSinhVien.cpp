#include <iostream>
#include <iomanip> // Để sử dụng setprecision và setw
#include <sstream> // Để sử dụng stringstream
using namespace std;

struct SinhVien {
    string hoTen, lop, ngaySinh;
    float diemGPA;
};

// Hàm chuẩn hóa ngày sinh
string chuanHoaNgaySinh(string ngaySinh) {
    stringstream ss(ngaySinh);
    int ngay, thang, nam;
    char slash;
    ss >> ngay >> slash >> thang >> slash >> nam;
    stringstream ssChuanHoa;
    ssChuanHoa << setw(2) << setfill('0') << ngay << "/"
               << setw(2) << setfill('0') << thang << "/"
               << setw(4) << nam;
    return ssChuanHoa.str();
}

void nhap(SinhVien &sv) {
    getline(cin, sv.hoTen);
    getline(cin, sv.lop);
    getline(cin, sv.ngaySinh);
    cin >> sv.diemGPA;
}

void in(const SinhVien &sv) {
    cout << "B20DCCN001 " << sv.hoTen << " " << sv.lop << " "
         << chuanHoaNgaySinh(sv.ngaySinh) << " "
         << fixed << setprecision(2) << sv.diemGPA;
}

int main() {
    SinhVien a;
    nhap(a);
    in(a);
    return 0;
}