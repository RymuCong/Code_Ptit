#include <bits/stdc++.h>
using namespace std;

void chuThuong(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s;
    map<string, int> m1, m2;
    ifstream fp1, fp2;
    fp1.open("DATA1.in");
    set<string> hg;
    while (fp1 >> s)
    {
        chuThuong(s);
        hg.insert(s);
        m1[s]++;
    }
    fp1.close();
    fp2.open("DATA2.in");
    while (fp2 >> s)
    {
        chuThuong(s);
        hg.insert(s);
        m2[s]++;
    }
    fp2.close();
    for (auto i : hg)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : m1)
    {
        if (m2[i.first] > 0)
            cout << i.first << " ";
    }
    return 0;
}