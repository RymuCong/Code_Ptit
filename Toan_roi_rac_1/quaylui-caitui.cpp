/*
Viết chương trình giải bài toán dưới đây trên máy tính sử dụng thuật toán duyệt toàn bộ:
Bài toán cái túi dạng 0 / 1 - mỗi thứ hoặc không lấy, hoặc lấy 1 (vào từ file, ra màn hình).
So loai do vat: 4
Trong luong tui: 9
Vector trong luong: 4 2 7 1
Vector gia tri su dung: 5 1 8 1
Ket qua toi uu: 9.0
Phuong an toi uu: 0 0 1 1
*/

#include <iostream>
using namespace std;

int n, tl_max, gt_max = 0;
int tl[10], gt[10], x[10] = {0}, sol[10]; 

void update ()
{
    int tong_tl = 0, tong_gt = 0; 
    for (int i = 1; i <= n; i++)
    {
        tong_gt += x[i]*gt[i];
        tong_tl += x[i]*tl[i];
    }
    if (tong_tl <= tl_max && tong_gt > gt_max)
    {
        gt_max = tong_gt;
        for (int i = 1; i <= n; i++)
            sol[i] = x[i];
    }
}

void quayluiCT (int j)
{
    for (int i = 0; i <= 1; i++)
    {
        x[j] = i;
        if (j == n)
            update();
        else
            quayluiCT(j+1);
    }
}

int main ()
{
    cin >> n >> tl_max;
    for (int i = 1; i <= n; i++)
        cin >> tl[i];
    for (int i = 1; i <= n; i++)
        cin >> gt[i];
    quayluiCT(1);
    for (int i = 1; i <= n; i++)
        cout << sol[i] << " ";
}