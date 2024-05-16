#include <bits/stdc++.h>
using namespace std;

int demsv = 1;

class SinhVien
{
public:
    int maSV;
    string tenSV;
    string lop;
    string ngaySinh;
    float gpa;

    SinhVien() {}

    friend ostream& operator <<(ostream & os, const SinhVien & sv);
    friend istream& operator >>(istream & is, SinhVien & sv);

    void chuanHoaNgaySinh ()
    {
        if (ngaySinh[1] == '/')
        {
            ngaySinh.insert(0, "0");
        }
        if (ngaySinh[4] == '/')
        {
            ngaySinh.insert(3, "0");
        }
    }

    void chuanHoaHoTen ()
    {
        stringstream ss(tenSV);
        string tu, chuanHoaTen;

        while (ss >> tu)
        {
            tu[0] = toupper(tu[0]);
            for (int i = 1; i < tu.length(); i++)
                tu[i] = tolower(tu[i]);
            
            if (!chuanHoaTen.empty())
                chuanHoaTen += " ";
            chuanHoaTen += tu;
        }

        tenSV = chuanHoaTen;
    }

};

ostream& operator <<(ostream & os, SinhVien & sv)
    {
        os << "B20DCCN" << setw(3) << setfill('0') << sv.maSV << " " << sv.tenSV << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.gpa << endl;
        return os;
    }

istream& operator >>(istream & is, SinhVien & sv)
    {
        is.ignore();
        getline(is, sv.tenSV);
        getline(is, sv.lop);
        getline(is, sv.ngaySinh);
        is >> sv.gpa;
        sv.maSV = demsv++;
        sv.chuanHoaNgaySinh();
        sv.chuanHoaHoTen();
        return is;
    }

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}