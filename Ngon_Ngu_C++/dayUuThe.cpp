#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string num;
        getline(cin,num);
        stringstream ss(num);
        string so;
        int le = 0, chan = 0;
        while (ss >> so)
        {
            int tmp = atoi(so.c_str());
            if (tmp % 2 == 0)
                chan++;
            else
                le++;
        }
        if ((chan + le) % 2 == 0)
        {
            if (chan > le)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (le > chan)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}