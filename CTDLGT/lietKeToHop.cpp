#include <iostream>
#include <set>
using namespace std;

int n, k, dem;
set<int> s;
int b[20];

void in()
{
    for (int i = 1; i <= k; i++)
    {
        auto it = s.begin();
        advance(it, b[i] - 1); // Di chuyển iterator đến phần tử thứ b[i] - 1 trong set
        cout << *it << " ";
    }
    cout << endl;
}

void quayluiTH(int j)
{
    for (int i = b[j - 1] + 1; i <= s.size() - k + j; i++)
    {
        b[j] = i;
        if (j == k)
            in();
        else
        {
            quayluiTH(j + 1);
            dem++;
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    quayluiTH(1);
    return 0;
}