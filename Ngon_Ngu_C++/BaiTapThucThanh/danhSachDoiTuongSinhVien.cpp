#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class SinhVien {
private:
    static int dem; // Bi?n d?m t? tang d? t?o m� sinh vi�n
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;

    // H�m chu?n h�a ng�y sinh
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
        in.ignore(); // Lo?i b? k� t? xu?ng d�ng th?a sau khi nh?p diemGPA
        sv.chuanHoaNgaySinh(); // Chu?n h�a ng�y sinh
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& sv) {
        out << sv.maSV << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.diemGPA << endl;
        return out;
    }
};

int SinhVien::dem = 0; // Kh?i t?o gi� tr? ban d?u cho bi?n d?m

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    cin.ignore(); // Lo?i b? k� t? xu?ng d�ng th?a sau khi nh?p N
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}
