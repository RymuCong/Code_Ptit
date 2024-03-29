#include <iostream>
#include <string.h>
using namespace std;

double chamDiem(string n, string key)
{
    double diem = 0;
    int i = 0;
    string a = "";
    for (int i = 0; i < n.length(); i++)
        if ((int)n[i] >= 65 && (int)n[i] <= 90)
            a += n[i];
    for (int i = 0; i < 15; i++)
        if (a[i] == key[i])
            diem += (double)10 / 15;
    return diem;
}

int main()
{
    int t;
    cin >> t;
    string key101 = "ABBADCCABDCCABD";
    string key102 = "ACCABCDDBBCDDBB";
    while (t--)
    {
        int maDe;
        cin >> maDe;
        string n;
        getline(cin, n);
        if (maDe == 101)
            printf("%.2f\n", chamDiem(n, key101));
        else
            printf("%.2f\n", chamDiem(n, key102));
    }
}