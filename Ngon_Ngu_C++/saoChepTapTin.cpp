#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");

    string dong;
    while (getline(fin,dong))
    {
        fout << dong << endl;
    }
    fin.close();
    fout.close();
}