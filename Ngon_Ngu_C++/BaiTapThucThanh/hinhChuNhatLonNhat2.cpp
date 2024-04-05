#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestRectangle(vector<vector<int>>& A) {
    int N = A.size(), M = A[0].size();
    vector<vector<int>> dp(N, vector<int>(M, 0));
    int maxRectangle = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == 1) {
                dp[i][j] = 1;
                if (i > 0 && j > 0) {
                    dp[i][j] += min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
                maxRectangle = max(maxRectangle, dp[i][j]);
            }
        }
    }

    return maxRectangle * maxRectangle;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> A[i][j];
            }
        }
        cout << largestRectangle(A) << endl;
    }
    return 0;
}