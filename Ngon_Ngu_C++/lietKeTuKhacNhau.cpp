#include <bits/stdc++.h>
using namespace std;

int main ()
{
    fstream fin("VANBAN.in");

    set <string> tu;

    string line;
    while (getline(fin, line))
    {
        stringstream ss(line);
        string word;

        while (ss >> word)
        {
            for (int i = 0; i < word.length(); i++)
                word[i] = tolower(word[i]);
            tu.insert(word);
        }
    }

    for (auto i : tu)
    {
        cout << i << endl;
    }
}