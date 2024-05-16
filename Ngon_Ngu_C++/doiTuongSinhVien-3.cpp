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

    friend ostream &operator<<(ostream &os, const SinhVien &sv);
    friend istream &operator>>(istream &is, SinhVien &sv);

    void chuanHoaNgaySinh()
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

    void chuanHoaHoTen()
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

ostream &operator<<(ostream &os, SinhVien &sv)
{
    os << "B20DCCN" << setw(3) << setfill('0') << sv.maSV << " " << sv.tenSV << " " << sv.lop << " " << sv.ngaySinh << " " << fixed << setprecision(2) << sv.gpa << endl;
    return os;
}

istream &operator>>(istream &is, SinhVien &sv)
{
    scanf("\n");
    getline(is, sv.tenSV);
    is >> sv.lop >> sv.ngaySinh >> sv.gpa;
    sv.maSV = demsv++;
    sv.chuanHoaNgaySinh();
    sv.chuanHoaHoTen();
    return is;
}

void sapxep(SinhVien sv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (sv[j].gpa > sv[j - 1].gpa)
            {
                SinhVien temp = sv[j];
                sv[j] = sv[j - 1];
                sv[j - 1] = temp;
            }
        }
    }
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
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}