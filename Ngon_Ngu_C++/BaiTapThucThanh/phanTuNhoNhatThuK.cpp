#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int n, k;
        cin >> n >> k; 
        vector<int> A(n); 
        for (int i = 0; i < n; i++) {
            cin >> A[i]; 
        }
        sort(A.begin(), A.end()); 
        cout << A[k-1] << endl; 
    }
    return 0;
}