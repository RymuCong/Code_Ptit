#include <iostream>
using namespace std;

long long a[100];

void fibonacci ()
{
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 92; i++)
        a[i] = a[i-1] + a[i-2];
}

int main ()
{
    int t;
    cin >> t;
    fibonacci();
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
    
}