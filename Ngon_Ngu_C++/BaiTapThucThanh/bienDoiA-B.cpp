#include <iostream>
#include <string.h>
using namespace std;

int bienDoi(string s)
{
    int dem = 0, toi_uu = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == 'B')
        {
            dem++;
        }
        else
        {
            if (toi_uu + 1 <= dem)
                toi_uu ++;
            else
                toi_uu = dem;
        }
    }
    return toi_uu;
}

int main()
{
    string s;
    cin >> s;
    cout << bienDoi(s) << endl;
    return 0;
}
