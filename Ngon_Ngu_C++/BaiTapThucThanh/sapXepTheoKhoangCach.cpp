#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối của |X - A[i] |. 
// Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể trên: 
// A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5. 
// Trong trường hợp có nhiều phần tử có giá trị tuyệt đối như nhau, ưu tiên theo thứ tự số xuất hiện trước trong mảng ban đầu.

// Hàm so sánh để sắp xếp
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) return a.second < b.second; // Nếu giá trị tuyệt đối bằng nhau, ưu tiên theo thứ tự ban đầu
    return a.first < b.first;
}

void sapXepTheoTriTuyetDoi(int A[], int n, int X) {
    vector<pair<int, int>> arr; // Lưu trữ giá trị tuyệt đối và chỉ số ban đầu

    // Lưu giá trị tuyệt đối và chỉ số ban đầu vào vector
    for (int i = 0; i < n; i++) {
        arr.push_back(make_pair(abs(X - A[i]), i));
    }

    // Sắp xếp vector dựa trên giá trị tuyệt đối và thứ tự ban đầu
    sort(arr.begin(), arr.end(), compare);

    // In ra mảng sau khi sắp xếp
    for (int i = 0; i < n; i++) {
        cout << A[arr[i].second] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, X;
        cin >> n >> X;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sapXepTheoTriTuyetDoi(A, n, X);
    }
    return 0;
}