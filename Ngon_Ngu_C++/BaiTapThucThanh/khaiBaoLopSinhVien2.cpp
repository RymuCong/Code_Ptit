#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class SinhVien {
private:
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;

    void chuanHoaNgaySinh() {
        int ngay, thang, nam;
        char phanCach;
        stringstream ss(ngaySinh);
        ss >> ngay >> phanCach >> thang >> phanCach >> nam;
        stringstream ssChuanHoa;
        ssChuanHoa << setfill('0') << setw(2) << ngay << "/" << setfill('0') << setw(2) << thang << "/" << setw(4) << nam;
        ngaySinh = ssChuanHoa.str();
    }

public:
    SinhVien() : maSV(""), hoTen(""), lop(""), ngaySinh(""), diemGPA(0) {}

    friend istream& operator>>(istream& in, SinhVien& sv) {
        getline(in, sv.hoTen);
        getline(in, sv.lop);
        getline(in, sv.ngaySinh);
        in >> sv.diemGPA;
        in.ignore(); 
        sv.maSV = "B20DCCN001";
        sv.chuanHoaNgaySinh(); 
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.diemGPA;
        return out;
    }
};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
