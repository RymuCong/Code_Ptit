#include <bits/stdc++.h>
using namespace std;

int main ()
{
    fstream fileIn("DATA.in");
    
    map <int, int> nho;
    string line;
    while (getline(fileIn, line))
    {
        stringstream ss(line);
        string tu;

        while (ss >> tu)
        {
            int tmp = atoi(tu.c_str());
            nho[tmp]++;          
        }
    }

    for (auto i : nho)
    {
        cout << i.first << " " << i.second << endl;
    } 

    fileIn.close();
}