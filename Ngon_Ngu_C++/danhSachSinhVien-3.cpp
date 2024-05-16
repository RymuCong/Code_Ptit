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
        stringstream ss(hoTen);
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
        if (i < 9)
        {
            sv[i].maSV = "B20DCCN00" + to_string(i + 1);
        }
        else
        {
            sv[i].maSV = "B20DCCN0" + to_string(i + 1);
        }
    }
}

void in(SinhVien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << sv[i].maSV << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].ngaySinh << " " << fixed << setprecision(2) << sv[i].gpa;
        cout << endl;
    }
}

void sapxep(SinhVien sv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (sv[j].gpa > sv[j - 1].gpa)
            {
                swap(sv[j], sv[j - 1]);
            }
        }
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}