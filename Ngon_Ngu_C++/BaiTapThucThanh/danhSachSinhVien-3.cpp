#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string hoTen, lop, ngaySinh, maSV;
    float diemGPA;
};

string chuanHoaNgaySinh(string ngaySinh)
{
    stringstream ss(ngaySinh), ssChuanHoa;
    int ngay, thang, nam;
    char slash;
    ss >> ngay >> slash >> thang >> slash >> nam;
    ssChuanHoa << setw(2) << setfill('0') << ngay << "/"
               << setw(2) << setfill('0') << thang << "/"
               << setw(4) << nam;
    return ssChuanHoa.str();
}

string chuanHoaHoTen(string hoTen)
{
    stringstream ss(hoTen), ssChuanHoa;
    string tu, hoTenChuanHoa;
    while (ss >> tu)
    {
        tu[0] = toupper(tu[0]);
        for (size_t i = 1; i < tu.size(); ++i)
        {
            tu[i] = tolower(tu[i]);
        }
        if (!hoTenChuanHoa.empty())
            hoTenChuanHoa += " ";
        hoTenChuanHoa += tu;
    }
    return hoTenChuanHoa;
}

void nhap(SinhVien ds[], int N) {
    for (int i = 0; i < N; ++i) {
        cin.ignore();
        getline(cin, ds[i].hoTen);
        ds[i].hoTen = chuanHoaHoTen(ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        ds[i].ngaySinh = chuanHoaNgaySinh(ds[i].ngaySinh);
        cin >> ds[i].diemGPA;
        stringstream ma;
        ma << (i+1);
        string danhSo = (i < 9 ? "00" : "0");
        ds[i].maSV = "B20DCCN" + danhSo + ma.str();
    }
}

bool cmp(const SinhVien &a, const SinhVien &b)
{
    return a.diemGPA > b.diemGPA;
}

void sapxep(SinhVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void in(SinhVien ds[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " " << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].diemGPA << endl;
    }
}
int main()
{
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}