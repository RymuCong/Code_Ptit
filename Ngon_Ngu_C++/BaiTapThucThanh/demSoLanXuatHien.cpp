#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân vị trí đầu tiên của X
int timKiemDauTien(int A[], int n, int X)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == X)
        {
            res = mid;
            high = mid - 1; // Tiếp tục tìm về phía trái
        }
        else if (A[mid] < X)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

// Hàm tìm kiếm nhị phân vị trí cuối cùng của X
int timKiemCuoiCung(int A[], int n, int X)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == X)
        {
            res = mid;
            low = mid + 1; // Tiếp tục tìm về phía phải
        }
        else if (A[mid] < X)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int dauTien = timKiemDauTien(A, N, X);
        int cuoiCung = timKiemCuoiCung(A, N, X);
        if (dauTien == -1)
            cout << -1 << endl; // Không tìm thấy X
        else
            cout << cuoiCung - dauTien + 1 << endl; // Số lần xuất hiện của X
    }
    return 0;
}