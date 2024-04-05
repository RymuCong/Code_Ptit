#include <iostream>
using namespace std;

int timKiemNhiPhan(int A[], int n, int X)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A[mid] == X)
            return 1; // Tìm thấy X, trả về 1
        else if (A[mid] < X)
            left = mid + 1; // Tìm ở nửa sau của mảng
        else
            right = mid - 1; // Tìm ở nửa đầu của mảng
    }
    return -1; // Không tìm thấy X, trả về -1
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, X;
        cin >> n >> X;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        cout << timKiemNhiPhan(A, n, X) << endl;
    }
    return 0;
}