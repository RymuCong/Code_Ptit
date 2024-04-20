#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
public:
    string masv;
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;

    SinhVien()
    {
        hoten = "";
        masv = "B20DCCN001";
        ngaysinh = "";
        lop = "";
        gpa = 0;
    }

    string chuanhoa(string ngaysinh)
    {
        stringstream ss(ngaysinh), ssChuanHoa;
        int ngay, thang, nam;
        char gachcheo;
        ss >> ngay >> gachcheo >> thang >> gachcheo >> nam;
        ssChuanHoa << setw(2) << setfill('0') << ngay
                   << "/" << setw(2) << setfill('0') << thang
                   << "/" << nam;
        return ssChuanHoa.str();
    }

void nhap ()
{
    fflush(stdin);
    getline(cin,hoten);
    getline(cin,lop);
    getline(cin,ngaysinh);
    cin >> gpa;
}

void xuat ()
{
    cout << masv << " " << hoten << " " << lop << " " << chuanhoa(ngaysinh) << " " 
    << fixed << setprecision(2) << gpa;
}

};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}