#include <iostream>
#include <algorithm>
using namespace std;

void tim_day_con(int A[], int n)
{
    int l = 0, r = n - 1, minVal, maxVal;

    // Bước 1: Tìm l
    while (l < n - 1 && A[l] <= A[l + 1])
        l++;

    if (l == n - 1)
        return;

    // Bước 2: Tìm r
    while (r > 0 && A[r] >= A[r - 1])
        r--;

    // Bước 3: Tìm giá trị nhỏ nhất và lớn nhất trong dãy con A[l] đến A[r]
    minVal = *min_element(A + l, A + r + 1);
    maxVal = *max_element(A + l, A + r + 1);

    // Bước 4: Mở rộng l
    while (l > 0 && A[l - 1] > minVal)
        l--;

    // Bước 5: Mở rộng r
    while (r < n - 1 && A[r + 1] < maxVal)
        r++;

    cout << l + 1 << " " << r + 1 << endl; // Điều chỉnh chỉ số để phù hợp với yêu cầu đề bài
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        tim_day_con(A, n);
    }
    return 0;
}