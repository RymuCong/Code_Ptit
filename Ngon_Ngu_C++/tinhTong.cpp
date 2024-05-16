#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    if (s.length() > 9)
        return 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}

int main ()
{
    // read data from DATA.in file
    ifstream fileIn("DATA.in");

    string line;
    long long sum = 0;
    while (getline(fileIn, line))
    {
        stringstream ss(line);
        string tu;
        while (ss >> tu)
        {
            if (!check(tu))
                continue;
            int tmp = atoi(tu.c_str());
            sum += tmp;
        }
    }
    cout << sum << endl;
}