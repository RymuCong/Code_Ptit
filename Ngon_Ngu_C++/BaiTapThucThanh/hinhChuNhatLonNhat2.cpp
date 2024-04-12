#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maxRectangle(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int maxArea = 0;

    // Tính chi?u cao liên t?c c?a c?t
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            if (matrix[i][j] == 1) {
                dp[i][j] = (i == 0) ? 1 : dp[i-1][j] + 1;
            }
        }
    }

    // Tính di?n tích l?n nh?t cho m?i hàng c?a dp
    for (int i = 0; i < n; ++i) {
        stack<int> st;
        int j = 0;
        while (j < m) {
            if (st.empty() || dp[i][st.top()] <= dp[i][j]) {
                st.push(j++);
            } else {
                int top = st.top();
                st.pop();
                int area = dp[i][top] * (st.empty() ? j : j - st.top() - 1);
                maxArea = max(maxArea, area);
            }
        }
        while (!st.empty()) {
            int top = st.top();
            st.pop();
            int area = dp[i][top] * (st.empty() ? j : j - st.top() - 1);
            maxArea = max(maxArea, area);
        }
    }

    return maxArea;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> matrix[i][j];
            }
        }
        cout << maxRectangle(matrix) << endl;
    }
    return 0;
}
