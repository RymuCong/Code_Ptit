#include <iostream>
using namespace std;

int a[20], n, unused[20];

void in ()
{
    int i;
    for (i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void quayluiHV (int j)
{
    for (int i = 1; i <= n; i++)
    {
        if (unused[i] == 1)
        {
            a[j] = i;
            unused[i] = 0;
            if (j == n)
                in();
            else
                quayluiHV(j+1);
            unused[i] = 1;
        } 
    }
}

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++) 
            unused[i]=1;
        quayluiHV(1);
        cout << endl;
    }
    
}