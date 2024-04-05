#include <iostream>
#include <algorithm> // Để sử dụng std::reverse
using namespace std;

void timHoanViTruoc(int X[], int N)
{
    int i = N - 1;
    while (i > 0 && X[i - 1] < X[i])
        i--;
    if (i <= 0)
    {
        reverse(X, X + N);
    }
    else
    {
        int j = N - 1;
        while (X[j] > X[i - 1])
            j--;
        swap(X[i - 1], X[j]);
        reverse(X + i, X + N);
    }
    for (int k = 0; k < N; k++)
    {
        cout << X[k] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int X[N];
        for (int i = 0; i < N; i++)
        {
            cin >> X[i];
        }
        timHoanViTruoc(X, N);
    }
    return 0;
}