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

   void chuanhoa ()
   {
        stringstream ss(ngaysinh), ssChuanHoa;
        int ngay, thang, nam;
        char gachcheo;
        ss >> ngay >> gachcheo >> thang >> gachcheo >> nam;
        ssChuanHoa << setw(2) << setfill('0') << ngay << "/"
        << setw(2) << setfill('0') << thang << "/"
        << setw(4) << nam;
        ngaysinh = ssChuanHoa.str();
   }

 friend istream& operator>>(istream& in, SinhVien& sv) {
        getline(in, sv.hoten);
        getline(in, sv.lop);
        getline(in, sv.ngaysinh);
        in >> sv.gpa;
        in.ignore(); 
        sv.masv = "B20DCCN001";
        sv.chuanhoa(); 
        return in;
    }

    friend ostream& operator<<(ostream& out, const SinhVien& sv) {
        out << sv.masv << " " << sv.hoten << " " << sv.lop << " " << sv.ngaysinh << " " << fixed << setprecision(2) << sv.gpa;
        return out;
    }

};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}