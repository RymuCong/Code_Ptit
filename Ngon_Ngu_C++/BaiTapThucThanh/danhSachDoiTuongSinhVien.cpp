#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class SinhVien {
private:
    static int dem; // Bi?n d?m t? tang d? t?o mã sinh viên
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;

    // Hàm chu?n hóa ngày sinh
    void chuanHoaNgaySinh() {
        stringstream ss(ngaySinh);
        int ngay, thang, nam;
        char phanCach;
        ss >> ngay >> phanCach >> thang >> phanCach >> nam;
        stringstream ssChuanHoa;
        ssChuanHoa << setfill('0') << setw(2) << ngay << "/" << setfill('0') << setw(2) << thang << "/" << setw(4) << nam;
        ngaySinh = ssChuanHoa.str();
    }

public:
    SinhVien() : maSV(""), hoTen(""), lop(""), ngaySinh(""), diemGPA(0) {
        dem++;
        stringstream ss;
        ss << "B20DCCN" << setfill('0') << setw(3) << dem;
        maSV = ss.str();
    }

    friend istream& operator>>(istream& in, SinhVien& sv) {
        getline(in, sv.hoTen);
        getline(in, sv.lop);
        getline(in, sv.ngaySinh);
        in >> sv.diemGPA;
        in.ignore(); // Lo?i b? ký t? xu?ng dòng th?a sau khi nh?p diemGPA
        sv.chuanHoaNgaySinh(); // Chu?n hóa ngày sinh
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.diemGPA << endl;
        return out;
    }
};

int SinhVien::dem = 0; // Kh?i t?o giá tr? ban d?u cho bi?n d?m

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    cin.ignore(); // Lo?i b? ký t? xu?ng dòng th?a sau khi nh?p N
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}
