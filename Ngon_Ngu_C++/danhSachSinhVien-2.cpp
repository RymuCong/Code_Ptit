#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string maSV;
    string hoTen;
    string ngaySinh;
    string lop;
    float gpa;

    void chuaHoaHoTen()
    {
        stringstream ss(hoTen), ssChuanHoa;
        string tu, hoTenChuanHoa;
        while (ss >> tu)
        {
            tu[0] = toupper(tu[0]);
            for (int i = 1; i < tu.length(); i++)
            {
                tu[i] = tolower(tu[i]);
            }
            if (!hoTenChuanHoa.empty())
            {
                hoTenChuanHoa += " ";
            }
            hoTenChuanHoa += tu;
        }
        hoTen = hoTenChuanHoa;
    }

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
};

void nhap(SinhVien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        // cout << "Nhap ho ten sinh vien: ";
        getline(cin, sv[i].hoTen);
        // cout << "Nhap lop: ";
        getline(cin, sv[i].lop);
        // cout << "Nhap ngay sinh: ";
        getline(cin, sv[i].ngaySinh);
        // cout << "Nhap GPA: ";
        cin >> sv[i].gpa;
        sv[i].chuanHoaNgaySinh();
        sv[i].chuaHoaHoTen();
    }
}

void in(SinhVien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "B20DCCN" << setw(3) << setfill('0') << i + 1 << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].ngaySinh << " " << fixed << setprecision(2) << sv[i].gpa;
        cout << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}