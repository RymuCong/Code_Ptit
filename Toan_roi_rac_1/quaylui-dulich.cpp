/*
Viết chương trình giải bài toán dưới đây trên máy
tính sử dụng thuật toán duyệt toàn bộ:
Bài toán người du lịch (vào từ file, ra màn hình).
So thanh pho: 5
Ma tran chi phi:
0 3 14 18 15
3 0 4 22 20
17 9 0 16 4
6 2 7 0 12
9 15 11 5 0
Chi phi toi uu 22:
Hanh trinh: 1-> 2 -> 3 -> 5 -> 4 -> 1
*/

#include <iostream>
using namespace std;

int n, x[10], sol[10], c[10][10], minC = 99999, cost = 0, minP = 99999;
bool visited[10] = {false};

void quayluiDL(int j)
{
    for (int i = 2; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            x[j] = i;
            cost += c[x[j - 1]][i];
            if (j == n)
            {
                if (cost + c[x[n]][1] < minC)
                {
                    minC = cost + c[x[n]][1];
                    for (int k = 1; k <= n; k++)
                        sol[k] = x[k];
                }
            }
            else if (cost + (n-i+1)*minP < minC)
                quayluiDL(j + 1);
            visited[i] = false;
            cost -= c[x[j - 1]][i];
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 0)
                c[i][j] = 99999;
            if (minP > c[i][j])
                minP = c[i][j];
        }
    x[1] = 1;
    quayluiDL(2);
    cout << minC << endl;
    for (int i = 1; i <= n; i++)
        cout << sol[i] << " -> ";
    cout << "1";
}
