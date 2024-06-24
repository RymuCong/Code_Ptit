#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    deque <int> dq;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int a;
            cin >> a;
            dq.push_back(a);
        }
        else if (s == "PUSHFRONT")
        {
            int a;
            cin >> a;
            dq.push_front(a);
        }
        else if (s == "POPFRONT")
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "POPBACK")
        {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "PRINTFRONT")
        {
            if (!dq.empty())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "PRINTBACK")
        {
            if (!dq.empty())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
    }
    
}