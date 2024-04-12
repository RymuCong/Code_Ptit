#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, Q;
        cin >> n >> Q;

        int A[10000];
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }

        for (int q = 0; q < Q; q++)
        {
            int L, R;
            cin >> L >> R;

            int tong = 0;
            for (int j = L; j <= R; j++)
            {
                tong += A[j];
            }
            cout << tong << endl;
        }
    }

    return 0;
}
