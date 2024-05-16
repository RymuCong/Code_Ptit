#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fp("DATA.in");
    int n, m, tmp;
    fp >> n >> m;
    set<int> s;
    map<int, int> dem;
    while (n--)
    {
        fp >> tmp;
        dem[tmp]++;
    }
    while (m--)
    {
        fp >> tmp;
        if (dem[tmp])
            s.insert(tmp);
    }
    for (int i : s)
        cout << i << ' ';
    return 0;
}