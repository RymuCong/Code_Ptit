#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n;
        cin >> n;
        if ((int)n >= 97)
        {
            n -= 32;
            cout << n << endl;
        }
        else
        {
            n += 32;
            cout << n << endl;
        }
    }
}