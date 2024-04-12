#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm tìm độ dài dãy con tăng dài nhất
int longestIncreasingSubsequence(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 1); // DP table

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    // Tìm giá trị lớn nhất trong dp[]
    return *max_element(dp.begin(), dp.end());
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << longestIncreasingSubsequence(arr) << endl;
    }
    return 0;
}