#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;

struct SinhVien {
    string hoTen, lop, ngaySinh;
    float diemGPA;
};

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

string chuanHoaHoTen(string hoTen) {
    stringstream ss(hoTen), ssChuanHoa;
    string tu, hoTenChuanHoa;
    while (ss >> tu) {
        tu[0] = toupper(tu[0]);
        for (size_t i = 1; i < tu.size(); ++i) {
            tu[i] = tolower(tu[i]);
        }
        if (!hoTenChuanHoa.empty()) hoTenChuanHoa += " ";
        hoTenChuanHoa += tu;
    }
    return hoTenChuanHoa;
}

void nhap(SinhVien ds[], int N) {
    cin.ignore();
    for (int i = 0; i < N; ++i) {
        getline(cin, ds[i].hoTen);
        ds[i].hoTen = chuanHoaHoTen(ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        cin >> ds[i].diemGPA;
        cin.ignore();
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