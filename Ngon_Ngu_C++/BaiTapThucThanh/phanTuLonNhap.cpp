#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int A[n];
        for (int j = 0; j < n; j++)
        {
            cin >> A[j];
        }

        int max = A[0];
        for (int j = 1; j < n; j++)
        {
            if (A[j] > max)
            {
                max = A[j];
            }
        }
        cout << max << endl;
    }

    return 0;
}
