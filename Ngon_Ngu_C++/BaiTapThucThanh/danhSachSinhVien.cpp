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
    stringstream ss(ngaySinh), ssChuanHoa;
    int ngay, thang, nam;
    char slash;
    ss >> ngay >> slash >> thang >> slash >> nam;
    ssChuanHoa << setw(2) << setfill('0') << ngay << "/"
               << setw(2) << setfill('0') << thang << "/"
               << setw(4) << nam;
    return ssChuanHoa.str();
}

void nhap(SinhVien ds[], int N) {
    cin.ignore(); // Loại bỏ ký tự newline còn lại từ lần nhập trước
    for (int i = 0; i < N; ++i) {
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        cin >> ds[i].diemGPA;
        cin.ignore(); // Loại bỏ ký tự newline còn lại
    }
}

void in(SinhVien ds[], int N) {
    for (int i = 0; i < N; ++i) {
        cout << "B20DCCN" << setw(3) << setfill('0') << i+1 << " "
             << ds[i].hoTen << " " << ds[i].lop << " "
             << chuanHoaNgaySinh(ds[i].ngaySinh) << " "
             << fixed << setprecision(2) << ds[i].diemGPA << endl;
    }
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}