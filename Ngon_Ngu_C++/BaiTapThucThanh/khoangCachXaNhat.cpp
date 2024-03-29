#include <iostream>
#include <climits>
using namespace std;

int khoangCach(int A[], int n)
{
    int *LMin = new int[n];
    int *RMax = new int[n];

    LMin[0] = A[0];
    for (int i = 1; i < n; ++i)
        LMin[i] = min(A[i], LMin[i - 1]);

    RMax[n - 1] = A[n - 1];
    for (int j = n - 2; j >= 0; --j)
        RMax[j] = max(A[j], RMax[j + 1]);

    int i = 0, j = 0, xaNhat = -1;
    while (j < n && i < n)
    {
        if (LMin[i] <= RMax[j])
        {
            xaNhat = max(xaNhat, j - i);
            j = j + 1;
        }
        else
        {
            i = i + 1;
        }
    }

    delete[] LMin;
    delete[] RMax;

    return xaNhat;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int *A = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        cout << khoangCach(A, n) << endl;
        delete[] A; // Giải phóng bộ nhớ
    }
    return 0;
}