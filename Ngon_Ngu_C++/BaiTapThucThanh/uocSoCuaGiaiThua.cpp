// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho px. 
// Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 32. 

#include <bits/stdc++.h>
using namespace std;

void chiaHet (int n, int p)
{
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        int tmp = i;
        while (tmp % p == 0)
        {
            dem++;
            tmp /= p;
        }     
    }
    cout << dem << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        chiaHet(n,p);
    }
}