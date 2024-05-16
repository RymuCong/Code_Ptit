#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
    public:
        string hoTen;
        string birthday;
        int ngaySinh;
        int thangSinh;
        int namSinh;
        void nhap()
        {
            cin >> hoTen >> birthday;

            ngaySinh = (birthday[0] - '0') * 10 + (birthday[1] - '0');
            thangSinh = (birthday[3] - '0') * 10 + (birthday[4] - '0');
            namSinh = (birthday[6] - '0') * 1000 + (birthday[7] - '0') * 100 + (birthday[8] - '0') * 10 + (birthday[9] - '0');
        }
        void xuat()
        {
            cout << hoTen << endl;
        }
};

void soSanhTuoi (vector <Nguoi> a)
{
    int tre = 0, gia = 0;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i].namSinh > a[tre].namSinh)
        {
            tre = i;
        }
        else if (a[i].namSinh == a[tre].namSinh)
        {
            if (a[i].thangSinh > a[tre].thangSinh)
            {
                tre = i;
            }
            else if (a[i].thangSinh == a[tre].thangSinh)
            {
                if (a[i].ngaySinh > a[tre].ngaySinh)
                {
                    tre = i;
                }
            }
        }
        if (a[i].namSinh < a[gia].namSinh)
        {
            gia = i;
        }
        else if (a[i].namSinh == a[gia].namSinh)
        {
            if (a[i].thangSinh < a[gia].thangSinh)
            {
                gia = i;
            }
            else if (a[i].thangSinh == a[gia].thangSinh)
            {
                if (a[i].ngaySinh < a[gia].ngaySinh)
                {
                    gia = i;
                }
            }
        }
    }
    a[tre].xuat();
    a[gia].xuat();
}

int main ()
{
    int n;
    cin >> n;
    cin.ignore();
    vector <Nguoi> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    soSanhTuoi(a);
}