#include <iostream>
using namespace std;

void chiaDu (int a, int m)
{
    for (int i = 1; i < m; i++)
    {
        if (a*i % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "-1" << endl;
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        chiaDu (a, m);
    }
    
}