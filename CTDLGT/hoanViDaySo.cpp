#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void hoanVi(int a[], int n)
{
    sort(a, a + n);
    do
    {
        printArray(a, n);
    } while (next_permutation(a, a + n)); // đưa ra hoán vị tiếp theo của dãy số
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    hoanVi(a, n);
    return 0;
}
