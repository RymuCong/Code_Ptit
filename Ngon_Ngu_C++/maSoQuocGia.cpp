#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int index = n.find("084");
        n.erase(index,3);
        cout << n << endl;
    }
}