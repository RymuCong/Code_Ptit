#include <iostream>
using namespace std;

int timViTri(int A[], int n, int X)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == X)
        {
            return i + 1; // Trả về vị trí đầu tiên của X trong mảng
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy X
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
        cout << timViTri(A, n, X) << endl;
    }
    return 0;
}