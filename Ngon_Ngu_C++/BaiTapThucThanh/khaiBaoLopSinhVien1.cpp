#include <iostream>
#include <iomanip> // Để sử dụng setprecision và setw
#include <sstream> // Để sử dụng stringstream
using namespace std;

class SinhVien {
    string hoTen, lop, ngaySinh;
    float diemGPA;
    
    public:
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

void nhap() {
	fflush(stdin);
        getline(cin, hoTen);
        getline(cin, lop);
        getline(cin, ngaySinh);
        cin >> diemGPA;
}

void xuat() {
        cout << "B20DCCN001 "
             << hoTen << " " << lop << " "
             << chuanHoaNgaySinh(ngaySinh) << " "
             << fixed << setprecision(2) << diemGPA << endl;
}
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
